#include<stdio.h>
int main(void)
{
	int a[10];
	int i,n,min;
	scanf("%d\n",&n);
	 
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");
	min=a[0];
	for(i=1;i<n;i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
		else
		{
		   min=min;
		}
	}
	printf("min is %d",min);
	return 0;
}
