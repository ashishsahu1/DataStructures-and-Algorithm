lst=[]

def menu():
    print(" ****************************************************************************  ")
    print("1. Enqueue  ")
    print("2. Dequeue  ")
    print("3. print  ")
    print("4. Exit  ")
    print(" ****************************************************************************  ")

def enqueue(data):
    lst.append(data)

def dequeue():
    lst.pop(0)

while True:
    menu()
    ch = int(input("ENter your choice : "))
    if ch==1:
        enqueue(int(input("ENter the data")))

    elif ch==2:
        dequeue()

    elif ch==3:
        print(lst)

    else:
        break