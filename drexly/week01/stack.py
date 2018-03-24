stack=[]
def push(n):
    stack.append(int(n))

def pop():
    if len(stack) is 0:
        print("-1")
    else:
        print(stack.pop())

def size():
    print(len(stack))

def empty():
    if len(stack) is 0:
        print("1")
    else:
        print("0")

def top():
    if len(stack) is 0:
        print("-1")
    else:
        print(stack[len(stack)-1])

if __name__ == '__main__':
    b=int(input())
    for i in range(b):
        c=str(input())
        if c.__contains__('push'):
            push(int(c.split(' ')[1]))
        elif c.__contains__('pop'):
            pop()
        elif c.__contains__('top'):
            top()
        elif c.__contains__('size'):
            size()
        elif c.__contains__('empty'):
            empty()