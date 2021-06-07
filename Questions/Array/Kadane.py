from sys import maxint
print(maxint)
def kadane(lst,n):
    maxT = 0
    maxP = 0
    for i in range(n):
        maxP+=lst[i]

lst = [-2, -3, 4, -1, -2, 1, 5, -3]
kadane(lst,len(lst))