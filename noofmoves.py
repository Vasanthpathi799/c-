a=list(map(int,input().split()))
b=list(map(int,input().split()))
i=len(a)
j=len(b)
k=0
s=0
while i>0 and j>0:
    print(a,b)
    if b[k] in a:
        t=b[k]
        print(b[k])
        b.remove(t)
        a.remove(t)
    else:
        m=
        s+=abs(b[k]-a[k])
        a.remove(a[k])
        b.remove(b[k])
    k+=1
    i-=1
    j-=1
print(s)


