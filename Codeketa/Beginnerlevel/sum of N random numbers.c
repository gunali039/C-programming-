#include <stdio.h>

int main(void) {
	int i,n,sum=0;
	int a[20];
	printf("enter size of array\n");
	scanf("%d",&n);
	printf("enter the no's to be added\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("sum of elements is %d",sum);

	return 0;
}
