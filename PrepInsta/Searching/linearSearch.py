def linearSearch(lst,key):
    for i in range(len(lst)):
        if lst[i]==key:
            return i+1

    return 'Not Found'

lst = [2,3,5,1,6,2,8,6,9,12]
key = 14
print(linearSearch(lst,key))