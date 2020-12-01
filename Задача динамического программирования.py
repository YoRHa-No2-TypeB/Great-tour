print("Введите n")
n = input()
n=int(n)
if n==1:
    print ("Введено начальное значение")
if n<1:
    print ("Введено неверное значение")
if n>1:
    n=n-1
    def fib(x = (n)):
        F = [0] * (n + 1)
        F[0] = 1
        F[1] = 1
        for i in range(2, n + 1):
            F[i] = F[i - 1] + F[i - 2] + F[i - 3] 
        return F[n]
    otvet = fib()
    print (otvet)