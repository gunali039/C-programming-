#include <stdio.h>

int main(void) {
	int a[20];
	int i,j,n,flag=0;
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
				flag=flag+1;
				break;
			}
		}
		if(flag==0)
		{
			printf("%d",a[i]);
		}
	}
	// your code goes here
	return 0;
}
