def binSearch(lst,k,l,r):
    l = 0
    while l<=r:
        mid = (l+r)//2
        if lst[mid]==k:
            return mid
        
        if lst[mid]<k:
            l = mid+1
        else:
            r = mid-1
    
    return -1

lst = [4,3,1,6,5,7]
k=6
lst.sort()
print(lst)
print(binSearch(lst,k,0,len(lst)-1)+1)