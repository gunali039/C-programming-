#include <stdio.h>

int main(void) {
	int n,b,i,rev=0;
	printf("enter the value \n");
	scanf("%d",&n);
	while(n>0)
	{
	   b=n%10;
	   rev=rev*10+b;
	   n=n/10;
		
	}
	if(rev==n)
	{
		printf("Palindrome\n");
	}
	else
	{
		printf("Not a palindronme\n");
	}
	return 0;
}
