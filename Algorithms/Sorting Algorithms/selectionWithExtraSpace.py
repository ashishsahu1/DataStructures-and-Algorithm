def minim(lst):
    min = 100000
    minI = 99999
    for i in range(len(lst)):
        if lst[i]<min:
            min = lst[i]
            minI=i

    return min,minI

lst = list(map(int, input().split()))
lst2 = len(lst)*[0]
min = lst[1]
for i in range(len(lst)):
    x,y = minim(lst)
    lst2.append(x)

# print(minim(lst))


