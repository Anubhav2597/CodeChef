#include<stdio.h>
int main()
{
    int i,j,N,x,y,t,p,a[100][100];
    scanf("%d",&t);
    while(t!=0)
    {
        x=0;
        y=0;
        p=1;
        scanf("%d\n",&N);
        while(x<N)
        {
            for(i=0,j=y;i<=x && j>=0;i++,j--)
            {
                a[i][j]=p;
                p+=1;
            }
            x+=1;
            y+=1;
        }
        x=1;
        y=1;
        while(x<N)
        {
            for(i=x,j=(N-1);i<=(N-1)&&j>=y;i++,j--)
            {
                a[i][j]=p;
                p+=1;
            }
            x+=1;
            y+=1;
        }
        for(i=0;i<N;i++)
        {
            for(j=0;j<N;j++)
            {
                if(a[i][j]<10)
                printf("%d  ",a[i][j]);
                else
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
        t-=1;
    }
    return(0);
}

