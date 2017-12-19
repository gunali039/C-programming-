#include <stdio.h>

int main(void) {
	char c;
	printf("Enter the character\n");
	scanf("%c",c);
	if((c=='a'||c=='A')||(c=='e'||c=='E')||(c=='i'||c=='I')||(c=='o'||c=='O')||(c=='u'||c=='U'))
	{
		printf("Vowel\n");
	}
	else
	{
		printf("Consonant\n");
	}
	
	return 0;
}
