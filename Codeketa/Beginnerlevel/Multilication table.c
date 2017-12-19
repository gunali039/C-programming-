#include <stdio.h>

int main(void) {
	int i,n,m;
	printf("enter the value\n");
	scanf("%d",&n);
	for(i=1;i<=5;i++)
	{
		m=n*i;
		printf("%d*%d=%d\n",n,i,m);
	}
}
