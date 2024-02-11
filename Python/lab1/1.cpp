a = int(input('Enter 1st number: '))
s = int(input('Enter 2nd number: '))
d = int(input('Enter 3nd number: '))

if a==s==d:
    print(3)
elif a==s or s==d or a==d:
    print(2)
else:
    print(0)
