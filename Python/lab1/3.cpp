n = int(input('Enter number: '))

for i in range(1, n+1):
    print(" "*(n-i), end="")
    for j in range(i, 0, -1):
        print(j, end="")
    for j in range(2, i+1):
        print(j, end="")
    print()
