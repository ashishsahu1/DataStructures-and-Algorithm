def bubbleSort(lst,n):
    for i in range(1,n):
        for j in range(0,n-i):
            if lst[j]>lst[j+1]:
                lst[j], lst[j+1] = lst[j+1], lst[j]
        print(lst)

lst = list(map(int,input().split()))
n = len(lst)
print('Before : ',lst)
bubbleSort(lst,n)
print('After : ',lst)