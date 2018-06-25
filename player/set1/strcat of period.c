#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[10];
	int i,n;
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<n+1;i++)
	{
		if(i<=n)
		{
			printf("%c",a[i]);
		}
	}
	printf(".");
	return 0;
	
}
