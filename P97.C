n = 7
print("Prime" if all(n % i != 0 for i in range(2, n)) else "Not Prime")
