#include <stdio.h>

int main(void) {
	int i,c=0,a,b,e;
	printf("enter the value\n");
	scanf("%d",&a);
	b=a;
	while(b>0)
	{
		e=b/10;
		++c;
		b=e;
	}
	printf("%d",c);
	
	return 0;
}
