def insertionSort(lst):
    n = len(lst)
    for i in range(1,n):
        for j in range(i-1,0,-1):
            if lst[i]<lst[j]:
                lst[i],lst[j] = lst[j], lst[i]
    return lst

lst = [3,5,2,4,1]
print(insertionSort(lst))
