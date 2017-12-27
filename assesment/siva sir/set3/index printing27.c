#include<stdio.h>
int main(void)
{
	int a[100];
	int i,n;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		printf("%d %d\n",a[i],i);
	}
	return 0;
	
}
