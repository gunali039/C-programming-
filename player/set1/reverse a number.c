#include <stdio.h>
int main(void) {
	int i,n;
	char a[10];
	scanf("%s",a);
	n=strlen(a);
	for(i=n-1;i>=0;i--)
	{
		printf("%c",a[i]);
	}
	// your code goes here
	return 0;
}
