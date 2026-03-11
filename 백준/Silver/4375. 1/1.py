import sys

for line in sys.stdin:
    n = int(line.strip())

    remainder = 1 % n
    length = 1

    while remainder != 0:
        remainder = (remainder * 10 + 1) % n
        length += 1

    print(length)