for n in range(2, 51):
    if all(n % i != 0 for i in range(2, n)):
        print(n, end=" ")
