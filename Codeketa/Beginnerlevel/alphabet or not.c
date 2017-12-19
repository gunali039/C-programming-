#include <stdio.h>

int main(void) {
	char c;
	printf("enter the character\n");
	scanf("%c",&c);
	if((c>64&&c<91)||(c>96&&c<123))
	{
		printf("Alphabet\n");
	}
	else
	{
		printf("Not\n");
	}
	// your code goes here
	return 0;
}
