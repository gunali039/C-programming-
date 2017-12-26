#include<stdio.h>
int main(void)
{
	int a[10];
	int i,n,max;
	scanf("%d\n",&n);
	 
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");
	max=a[0];
	for(i=1;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
		else
		{
		   max=max;
		}
	}
	printf("max is %d",max);
	return 0;
}
