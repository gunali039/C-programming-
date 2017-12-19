#include <stdio.h>

int main(void) {
	int a;
	printf("enter the year\n");
	scanf("%d",&a);
	if(a%400==0)
	{
		printf("Leap year\n");
	}
	else if(a%100==0)
	{
		printf("Not a leap year\n");
	}
	else if(a%4==0)
	{
		printf("Leap year\n");
	}
	else
	{
		printf("Not a leap year\n");
	}
	return 0;
}
