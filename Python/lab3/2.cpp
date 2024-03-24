a = input("Введите строку: ")
stroka = ""

for i in range(len(a)-1):
    if a[i].isalpha():
        if a[i + 1].isdigit():
            stroka += a[i] * int(a[i + 1])
        else:
            stroka += a[i]
            
if a[-1].isalpha():
    stroka += a[-1]
    
print("Ответ:", stroka)
