class node:
    def __init__(self,data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def insertAtBeg(self,value):
        newnode = node(value)
        if self.head==None:
            self.head = newnode
        else:
            newnode.next = self.head
            self.head = newnode

    def insertAtEnd(self,value):
        newnode = node(value)
        temp=self.head
        while(temp.next is not None):
            temp = temp.next
        temp.next = newnode


    def insertAtMed(self,pos,value):
        newnode = node(value)
        temp=self.head
        c=2
        while c is not pos:
            temp = temp.next
            c+=1  
        newnode.next=temp.next
        temp.next=newnode
                
            
    def deleteAtBeg(self):
        temp=self.head
        self.head=self.head.next


    def deleteAtEnd(self):
        temp=self.head
        while temp.next.next is not None:
            temp = temp.next

        temp.next=None

    def deleteAtMed(self,pos):
        c=2
        temp=self.head
        while c is not pos:
            temp=temp.next
            c+=1
        temp.next=temp.next.next


        

    def count(self):
        temp = self.head
        c=0
        if temp is None:
            return 0
        else:
            while temp is not None:
                temp=temp.next
                c+=1
            return c

    def show(self):
        temp = self.head
        while temp is not None:
            print(temp.data)
            temp = temp.next



def menu():
    print("----------------------------------------------------------------------------")
    print()
    print("1. Insertion from beginning ")
    print("2. Insertion for end ")
    print("3. Deletion from beginning ")
    print("4. Deletion from end ")
    print("5. Size of List ")
    print("6. Insertion in between ")
    print("7. Deletion in between ")
    print("8. Show my list ")
    print("9. Exit()")
    print()
    print("----------------------------------------------------------------------------")

if __name__ =='__main__':
    ll = LinkedList()
    print("This program implement complete LinkedList in python language ")
    while(1):
        menu()
        x = int(input('Enter your choice : '))

        if x==1:
            value = int(input('Enter the value : '))
            ll.insertAtBeg(value)

        elif x==2:
            value = int(input('Enter the value : '))
            ll.insertAtEnd(value)

        elif x==3:
            ll.deleteAtBeg()

        elif x==4:
            ll.deleteAtEnd()

        elif x==5:
            print("Size of list is : "+str(ll.count()))

        elif x==6:
            value = int(input('Enter the value : '))
            pos=int(input("Enter the position to insert : "))
            ll.insertAtMed(pos,value)

        elif x==7:
            pos=int(input("Enter the position to delete : "))
            ll.deleteAtMed(pos)

        elif x==8:
            print("**************************************************************")
            print()
            ll.show()
            print()
            print("**************************************************************")
            

        elif x==9:
            exit()

        else:
            print("~ Enter valid option ~")