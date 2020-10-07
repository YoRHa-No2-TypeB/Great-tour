from collections import deque

def bfs(graph, root, ver):
    distances = {}
    distances[root] = 0
    q = deque([root])
    while q:
        current = q.popleft()
        for neighbor in graph[current]:
            if neighbor not in distances:
                distances[neighbor] = str(distances[current]) + str(current) +'->'
                q.append(neighbor)
               

    return distances[ver]

graph = {0:[1,2,3], 1:[0,4,5], 2:[0,6,7], 3:[0,8], 4:[1,9], 5:[1,9,10], 6:[2,11], 7:[2,12,13], 8:[3,13,14,15], 9:[4,5], 10:[5], 11:[6,12], 12:[7,11], 13:[7,8], 14:[8],15:[8]}
z = (bfs(graph, 0, 13)+str(13))
index = 1
z = z [index:]
print(z)
