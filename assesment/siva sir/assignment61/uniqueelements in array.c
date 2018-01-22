#include <stdio.h>

int main(void) {
	int a[10],b[10];
	int i,j,n,temp;
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
	printf("\nthe sorted array is");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[i]==a[j])
			{
				break;;
			}
		
			
		}
		if(i==j)
		{
			printf("\n%d",a[i]);
		}
	}
	
	// your code goes here
	return 0;
}
