n=int(input())
l=list(map(int,input().split()))
s=0
for i in range(n):
    for j in range(1,n-i+1):
        # print(l[i:i+j])
        if len(l[i:i+j])%2!=0:
            s+=sum(l[i:i+j])
print(s)
