#python uses list as an array 

stack = []
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
        ch = int(input('Enter your choice : '))
        if ch==1:
            value = int(input('Enter the value to push : '))
            stack.append(value)
        elif ch==2:
            stack.pop()
            print('Poped')
        elif ch==3:
            for i in range(len(stack)-1,0,-1):print(stack[i])
        elif ch==4:
            exit()
        else:
            print('invalid option selected')


