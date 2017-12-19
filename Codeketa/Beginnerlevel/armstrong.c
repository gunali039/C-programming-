#include <stdio.h>

int main(void) {
	int n,d,rem=0,b;
	printf("enter the no\n");
	scanf("%d",&n);
	d=n;
	while(n>0)
	{
		b=n%10;
		rem=b*b*b+rem;
		n=n/10;
	}
	if(rem==d)
	{
		printf("The no is armstrong number\n");
	}
	else
	{
		printf("It is not armstrong number\n");
	}
	return 0;
}
