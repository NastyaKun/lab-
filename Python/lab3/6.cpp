word = input("Введите строку: ")
abbrev = ""
for word in word.split():
    abbrev += word[0].upper()
print("Аббревиатура:", abbrev)
