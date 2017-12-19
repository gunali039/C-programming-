#include <stdio.h>
 
int main(void) {
int a;
printf("enter the value of a\n");
scanf("%d",&a);
if(a>=1)
{
printf("Positive\n");
}
else if(a<=-1)
{
printf("Negative\n");
}
else
{
printf("Zero\n");
}
 
	return 0;
}
