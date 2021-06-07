class minHeap:
    harr=[]
    def parent(self,i):
        return (i-1)/2
    def left(self,i):
        return ((2*i)+1)
    def right(self,i):
        return ((2*i)*2)
    def getMin(self):
        return self.harr[0]

    def replaceMax(self,x):
        self.harr[0]=x
        minHeapify(0)

    def __init__(self,arr,size):
        self.heapSize = size
        self.harr = arr
        self.i = (self.heapSize - 1)//2
        while(self.i >= 0):
            minHeapify(self.i)

def kthSmallest(arr,n,k):
    minHeap

arr = [12,3,5,7,19]
n = len(arr)
kthSmallest(arr,n,k)