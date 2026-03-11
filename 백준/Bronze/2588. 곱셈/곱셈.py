A = int(input())
B = int(input())

c = B % 10
b = B % 100 // 10
a = B // 100

print(A * c)
print(A * b)
print(A * a)
print(A * B)