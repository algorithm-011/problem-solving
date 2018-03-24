if __name__ == '__main__':
    ml=3001
    hash=[False]*ml
    b=int(input())
    a=input().split(' ')
    aa=list(map(lambda x:int(x),a))
    while len(aa)>0:
        hash[aa.pop()+1000]=True
    rst=""
    for i in range(ml):
        if hash[i]:
            rst+=str(i-1000)+" "
    print(rst.rstrip())
