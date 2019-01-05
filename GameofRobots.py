t=int(input())
for _ in range(t):    
    s=input()
    r=[]
    count=0
    for i in range(0,len(s)):
        if s[i]!='.':
            x=int(s[i])
            y=(i)-x
            z=(i)+x
            for j in range(y,(z+1)):
                r.append(j)
        else:
            continue
    for item in r:
        for item1 in r:
            if item==item1:
                count+=1
    if count>len(r):
        print("unsafe")
    else:
        print("safe")
