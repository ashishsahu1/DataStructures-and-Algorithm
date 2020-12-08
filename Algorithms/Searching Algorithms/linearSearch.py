def linSearch(lst,k):
    for i in range(len(lst)):
        if i == k:
            return True
    return False

lst = [4,3,1,6,5,7]
k=3
if linSearch(lst,k):
    print('Present')
else:
    print("Not Present")