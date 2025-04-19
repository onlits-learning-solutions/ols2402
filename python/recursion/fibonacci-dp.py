def fibonacci(n):
    if mem[n] != -1:
        return mem[n]
    if n == 1:
        mem[n] = 0
        return 0
    if n == 2:
        mem[n] = 1
        return 1
    mem[n] = fibonacci(n - 2) + fibonacci(n - 1)
    return mem[n]


n = int(input("Enter number of terms: "))
mem = [-1] * (n + 1)
print(f"Fibonacci series upto {n} terms:")
for i in range(1, n + 1):
    print(f"{fibonacci(i)}", end=" ")
print()

# Output:
# Enter number of terms: 10
# Fibonacci series upto 10 terms:
# 0 1 1 2 3 5 8 13 21 34
# Enter number of terms: 20
# Fibonacci series upto 20 terms:
# 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181
