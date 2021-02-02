def insertionSort(lst,n):
    for i in range(1,n):
        temp = lst[i]
        j = i-1
        while(lst[j]>temp and j>=0):
            lst[j+1]=lst[j]
            j=j-1
        lst[j+1]=temp


lst = list(map(int,input().split()))
n = len(lst)
print('Before : ',lst)
insertionSort(lst,n)
print('After : ',lst)