#include <stdio.h>
#include<string.h>
int main(void) {
	int i,n;
	char a[10];
	scanf("%s",a);
	n=strlen(a);
	for(i=n-1;i>=0;i--)
	{
		if(a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U')
	
		{
			continue;
		}
		else
		{
			printf("%c",a[i]);
		}
	}
	// your code goes here
	return 0;
}
