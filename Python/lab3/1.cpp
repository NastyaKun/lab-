a = input("Введите строку: ")
stroka = ""
count = 1
for i in range(len(a)-1):
    if a[i] == a[i+1]:
        count += 1
    else:
        if count > 1:
            stroka += a[i] + str(count)
        else:
            stroka += a[i]
        count = 1
if count > 1:
    stroka += a[-1] + str(count)
else:
    stroka += a[-1]
print("Ответ:", stroka)
