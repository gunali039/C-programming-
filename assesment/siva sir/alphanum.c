#include <stdio.h>

int main(void) {
	
	char a[10];
	int i,n;
	int al=0,nu=0;
	scanf("%s",a);
	n=strlen(a);
	printf("%s",a);
	printf("\n");
	for(i=0;i<n;i++)
	{
		scanf("%c",&a[i]);
		printf("%c",a[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		if((a[i]>64&&a[i]<91)||(a[i]>96&&a[i]<123))
		{
			al=al+1;
		}
		else
		{
			nu=nu+1;
		}
	
	}
		printf("al-%d,nu-%d",al,nu);
	return 0;
}
