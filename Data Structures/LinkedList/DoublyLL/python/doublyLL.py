class node:
    def __init__(self,value):
        self.data=value
        self.next=None
        self.prev=None

class DoubleLinkedList:
    def __init__(self):
        self.head=None

    def insertAtBeg(self,value):
        newnode = node(value)
        if self.head==None:
            self.head=newnode
        else:
            self.head.prev = newnode
            newnode.next=self.head
            self.head=newnode

    def insertAtEnd(self,value):
        newnode=node(value)
        if self.head == None:
            self.head=newnode
        else:
            temp=self.head
            while temp.next is not None:
                temp=temp.next
            temp.next=newnode
            newnode.prev=temp

    def insertAtBet(self,value,pos):
        pass
    
    def deleteAtBeg(self):
        temp = self.head
        self.head=self.head.next
        
    def deleteAtEnd(self):
        temp=self.head
        while temp.next.next is not None:
            temp=temp.next
        temp.next = None
        
    def deleteAtBet(self,pos):
        pass

    def show(self):
        temp = self.head
        while(temp is not None):
            print(temp.data)
            temp=temp.next

    def revshow(self):
        temp = self.head
        while(temp.next is not None):
            temp=temp.next
        while(temp is not None):
            print(temp.data)
            temp=temp.prev
    
def menu():
        print('------------------------------------------------------------------------------')
        print()
        print('1. Insertion at beginning')
        print('2. Insertion at end')
        print('3. Insertion at between')
        print('4. Deletion at beginning')
        print('5. Deletion at end')
        print('6. Deletion at between')
        print('7. Show')
        print('8. Reverse show')
        print('9. Exit()')
        print()
        print('------------------------------------------------------------------------------')
        



if __name__ == '__main__':
    ll = DoubleLinkedList()
        
    while(True):

        menu()
        ch = int(input('Enter your choice : '))
        if ch==1:
            value= int(input('ENter your data : '))
            ll.insertAtBeg(value)
        elif ch==2:
            value= int(input('ENter your data : '))
            ll.insertAtEnd(value)
        elif ch==3:
            value= int(input('ENter your data : '))
            pos= int(input('ENter your position : '))
            ll.insertAtBet(value,pos)
        elif ch==4:
            ll.deleteAtBeg()
        elif ch==5:
            ll.deleteAtEnd()
        elif ch==6:
            pos=int('Enter the position : ')
            ll.deleteAtBet(pos)
        elif ch==7:
            print('***************************************************************************')
            ll.show()
            print('***************************************************************************')
        elif ch==8:
            print('***************************************************************************')
            ll.revshow()
            print('***************************************************************************')
        elif ch==9:
            exit()
        else:
            print("Enter some valid option")

    

