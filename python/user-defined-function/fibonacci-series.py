def fibonacci(n):
    if n == 1:
        return 0
    if n == 2:
        return 1

    f1 = 0
    f2 = 1
    
    for i in range(3, n + 1):
        fn = f1 + f2
        f1 = f2
        f2 = fn
    return fn


n = int(input("Enter number of terms: "))
print(f"Fibonacci series upto {n} terms:")
for i in range(1, n + 1):
    print(f"{fibonacci(i)}", end=" ")

print()
