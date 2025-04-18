def factorial(n):
    i = 1
    f = 1
    while(i<=n):
        f = f * i
        i += 1
    return f

n = int(input("Enter a number: "))
f = factorial(n)
print(f"{n}! = {f}")