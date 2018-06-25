#include <stdio.h>
int main(void) {
	int i,n,rem,a,d,rev=0;
	scanf("%d",&n);
	d=n;
	while(d>0)
	{
		rem=d%10;
		rev=rev*10+rem;
		d=d/10;
		
	}
	printf("%d",rev);
	return 0;
}
