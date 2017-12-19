#include <stdio.h>

int main(void) {
	int a,b,c;
	printf("enter the three numbers\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a>b&&a>c)
	{
		printf("%dn",a);
	}
	else if(b>a&&b>c)
	{
		printf("%d\n",b);
	}
	else
	{
		printf("%d \n",c);
	}
	
	return 0;
}
