import random

list = ["a", "b", "c", "d", "e"]

x = 4

for e in range(len(list)):
    char = list[x]
    list.append(char)
    x -= 1
    print(list)
