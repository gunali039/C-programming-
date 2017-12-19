#include <stdio.h>

int main(void) {
	int i,a,b;
	printf("Enter the starting range\n");
	scanf("%d",&a);
	printf("Enter the ending range\n");
	scanf("%d",&b);
	for(i=a;i<=b;i++)
	{
		if(i%2==!0)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
