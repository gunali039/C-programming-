#include <stdio.h>

int main(void) {
	int a[10],c[100];
	int n,i,j,temp,min,d=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			c[i]=a[j]-a[i];
			scanf("%d",&c[i]);
			printf("%d",c[i]);
			d++;
			printf("\n");
			
		}
	}
	printf("%d",d);

	
	return 0;
}
