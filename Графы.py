z = 1
while z>0:
    print("Введите количесвто вершин графа")
    n = input()
    n = int(n)
    print("Введите количесвто рёбер графа")
    m = input()
    m = int(m)
    print("Выберите способ задания графа")
    print("1 - Список смежностей")
    print("2 - Матрица смежностей")
    print("3 - Матрица инцидентности")
    x = input()
    x = int(x)
    


    if x == 1:
        print("Введите список смежностей в виде целых чисел")
        a = {}
        for i in range(n):
           a[i] = set(input())
        print(a)
      
      
    if x == 2:
        print("Введите матрицу смежностей в виде '0' и '1'") 
        a = [[[int(j) for j in input()] for j in range(n)] for i in range(n)]
        for i in range(len(a)):
            print()
            for j in range(len(a[i])):
                print(a[i][j], end=' ')
                
                
    if x == 3:
        print("Введите матрицу инцидентности в виде '0', '1' и '2'(2 исп вместо '-1'") 
        a = [[[int(j) for j in input()] for j in range(n)] for i in range(m)]
        for i in range(len(a)):
            print()
            for j in range(len(a[i])):
                print(a[i][j], end=' ')
        