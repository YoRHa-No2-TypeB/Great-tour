a = set()
b = set()

print("Введите размерность множества A")
n = input()
n = int(n)
print("Введите размерность множества B")
m = input()
m = int(m)

i = 0
print("Введите элементы множества A")
while i <n :
    number = input()
    a.add(number)
    i = i + 1 

i = 0
print("Введите элементы множества B")
while i <m :
    number = input()
    b.add(number)
    i = i + 1 

output = a.union(b)
diff_a = a.difference(b)
symm_diff = a.symmetric_difference(b)
intersect = a.intersection(b)
iss = a.issubset(b)

k = 0
while k<6 :
    print("Выберите операцию")
    print("1 - объединение")
    print("2 - пересечение")
    print("3 - разность")
    print("4 - симметрическая разность")
    print("5 - принадлежность А к Б")
    print("Введите другое число для выхода")
    k = input()
    if k == "1" :
        print(output)
    elif k == "2" :
        print(intersect) 
    elif k == "3" :
        print(diff_a) 
    elif k == "4" :
        print(symm_diff) 
    elif k == "5" :
        print(iss)
    k = int(k)

