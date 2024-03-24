dict = {}
count = int(input("Введите число строк: "))
for i in range(count):
    stroka = input("Введите строку: ")
    if stroka in dict.keys():
        dict[stroka] += 1
    else:
        dict[stroka] = 1
print(" ".join([str(i) for i in dict.values()]))
