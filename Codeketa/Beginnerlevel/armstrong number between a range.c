#include <stdio.h>

int main(void) {
	int n,i,a,d,l,rem,b;
	printf("enter the range\n");
	scanf("%d",&a);
	scanf("%d",&l);
	for(i=a;i<=l;i++)
	{
		rem=0;
	n=i;
	d=i;
	while(n>0)
	{
		b=n%10;
		rem=b*b*b+rem;
		n=n/10;
	}
	if(rem==d)
	{
		printf("The no is armstrong number %d\n",d);
	}
}
	return 0;
}
