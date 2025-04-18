n = int(input("Enter number of terms: "))
f1 = 0
f2 = 1
print(f"Fibonacci series upto {n} terms:")
print(f"{f1} {f2}", end=" ")
i = 3
while i <= n:
    fn = f1 + f2
    print(f"{fn}", end=" ")
    f1 = f2
    f2 = fn
    i += 1
print()
