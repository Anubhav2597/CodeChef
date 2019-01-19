list1=[]
list2=[]
for i in range(2,100):
    count=0
    for j in range(1,int((i/2)+1)):
        if (i%j)==0:
            count=count+1
    
    if count<2:
        if i<10:
            list1.append(i)
            
        k=i
        while k!=0:
            j=int(k%10)
            list2.append(j)
            k=int(k/10)
        
        for m in list1:
            for n in list2:
                if m==n:
                    list2.remove(n)
    
        if len(list2)==0:
            print(i)
        list2.clear()