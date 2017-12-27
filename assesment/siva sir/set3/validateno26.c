#include <stdio.h>

int main(void) {
	char a[100];
	int i,n,flag=0;
	scanf("%s",a);
	n=strlen(a);
	printf("%d",n);
	printf("\n");
	printf("%s",a);
	for(i=0;i<n;i++)
	{
		if(a[i]>=48&&a[i]<=57)
		{
			flag=1;
		}
		else
		{
			flag=0;
		}
	}
	printf("\n");
	if(flag==1)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}
