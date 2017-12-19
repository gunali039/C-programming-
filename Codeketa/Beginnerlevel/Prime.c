#include <stdio.h>

int main(void) {
	int i, n,flag=0;
	printf("enter the no\n");
	scanf("%d",&n);
	for(i=2;i<n/2;i++)
	{
		if(n%i==0)
		{
			flag=1;
		}
	}
	if(flag==0)
	{
		printf("It is prime\n");
	}
	else
	{
		printf("It is not\n");
	}
	return 0;
}
