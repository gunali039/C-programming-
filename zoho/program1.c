#include <stdio.h>

int main(void) {
	int a[100];
	int n,i,j,k,c,d,max=2,flag;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d\n",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			flag=0;
			c=a[i]+a[j];
             	for(k=2;k<=c/2;k++)
		{
			if(c%k==0)
			{
		
	                 		flag=1;
			}
		}
		if(flag==0)
		{
			d=c;
			if(max<d)
			{
				max=d;
			}
	
		}
		}
	
	

	}
	printf("%d",max);
	// your code goes here
	return 0;
}
