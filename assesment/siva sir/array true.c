#include<stdio.h>
#include<string.h>
int main(void)
{
	int a[10];
	int i,n,c;
	int count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	printf("%d",a[i]);
	}

	for(i=0;i<n;i+=c)
	{
		c=a[i];
	            if(i==n-1)
	            {
	            	count=count+1;
	            }
	            else
	            {
	            	continue;
	            }
	}
	if(count==1)
	{
		printf("\ntrue");
	}
	else
	{
		printf("\nfalse");
	}
	return 0;
}
