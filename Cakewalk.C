#include <stdio.h>
int main(void) {
	// your code goes here
	int i, j, count=0, times[10][10];
	for(i=0;i<10;i++)
	{
	    printf("\n");
	    for(j=0;j<10;j++)
	    {
	        scanf("%d",&times[i][j]);
	    }
	}
	for(i=0;i<10;i++)
	{
	    for(j=0;j<10;j++)
	    {
	        if(times[i][j]<=30)
	        {
	            count+=1;
	        }
	    }
	}
	if(count>=60)
	{
	    printf("\nyes");
	}
	else
	{
	    printf("\nno");
	}
	return 0;
}