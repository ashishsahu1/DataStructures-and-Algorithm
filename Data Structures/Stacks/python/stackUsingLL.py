class node:
    def __init__(self,data):
        self.data = data
        self.next = None

class Stack:
    def __init__(self):
        self.top = None
    
    def Push(self,data):
        newnode = node(data)
        if self.top == None:
            self.top = newnode
        else:
            newnode.next = self.top
            self.top = newnode

    def Pop(self):
        if self.top ==None:
            print('Stack Underflow')
        else:
            self.top = self.top.next
            print('Element poped')    
    
    def Show(self):
        temp= self.top
        while temp is not None:
            print(temp.data,'5')
            temp = temp.next

def menu():
    print('*********************************************************************')
    print()
    print("1. Push Element in stack ")
    print("2. Pop the element ")
    print("3. Print stack")
    print("4. Exit()")
    print()
    print('*********************************************************************')


if __name__ =='__main__':
    while True:
        menu()
        ll = Stack()
        ch = int(input('Enter your choice : '))
        
        if ch==1:
            value = int(input('Enter the value to push : '))
            ll.Push(value)    
        elif ch==2:
            ll.Pop()
        elif ch==3:
            ll.Show()
        elif ch==4:
            exit()
        else:
            print('invalid option selected')
