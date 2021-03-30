def binarySearch(lst,key,first,last):
    mid = (first+last)//2
    if last>=first:
        if lst[mid] == key:
            return mid
        elif lst[mid]>key:
            return binarySearch(lst,key,first,mid-1)
        else:
            return binarySearch(lst,key,mid+1,last)
    else:
        return -1


lst = [2,3,5,1,6,2,8,6,9,12]
lst.sort()
key = 12
print(binarySearch(lst,key,0,len(lst)-1)+1)