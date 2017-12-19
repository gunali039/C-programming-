#include <stdio.h>

int main(void) {
	int n,p,d,i;
	printf("Enter the no\n");
	scanf("%d",&n);
	printf("Enter the power\n");
	scanf("%d",&p);
	d=n;
	for(i=1;i<p;i++)
	{
		d=d*n;
	}
	printf("Power of given no is %d",d);
	return 0;
}
