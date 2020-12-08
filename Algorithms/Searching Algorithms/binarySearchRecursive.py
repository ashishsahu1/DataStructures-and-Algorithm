def binSearchRec(lst,k,l,r):
    if l<=r:
        mid = (l+r)//2
        if lst[mid]==k:
            return mid
        
        if lst[mid]<k:
            return binSearchRec(lst,k,mid+1,r)
        else:
            return binSearchRec(lst,k,l,mid-1)

    return -1

lst = [4,3,1,6,5,7]
k=2
lst.sort()
print(lst)
print(binSearchRec(lst,k,0,len(lst)-1)+1)