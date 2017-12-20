#include <stdio.h>

int main(void) {
	int a[10];
	int i,j,n,c,k,temp;
	scanf("%d",&n);
	scanf("%d",&k);
	for(j=0;j<5;j++)
	{
		scanf("%d",&a[j]);
	}
	for(i=0;i<k;i++)
	{
		c=a[0];
	for(j=0;j<n-1;j++)
	{
	   temp=a[j];
	   a[j]=a[j+1];
	   a[j+1]=temp;
	}
	}
	for(j=0;j<n;j++)
	{
        
		 printf("%d\n",a[j]);
	}
	
	return 0;
}

