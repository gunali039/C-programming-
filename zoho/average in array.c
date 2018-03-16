#include <stdio.h>

int main(void) {
	int a[100];
	int i,j,n,sum=0,sum1=0,a1,a2,c1=0,c2=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n/2+1;i++)
	{
		sum=sum+a[i];
		c1++;
	}
	a1=sum/c1;
	for(i=n/2+1;i<n;i++)
	{
		sum1=sum1+a[i];
		c2++;
	}
	a2=sum1/c2;
	if(a1==a2)
	{
		printf("yes");
	}
	// your code goes here
	return 0;
}
