#include<stdio.h>
int main(void)
{
	int a[10];
	int i,j,c,n,flag=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				flag=1;
				c=a[i];
				break;
			}
		}
	}
	if(flag==1)
	{
		printf("%d",c);
	}
	else
	{
		printf("UNIQUE");
	}
	return 0;
}
