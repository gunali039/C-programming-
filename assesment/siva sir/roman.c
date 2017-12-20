#include <stdio.h>

int main(void) {
	char str[10];
	int a[10];
	int n,i,c=0,j;
	char I,V,X;
	scanf("%s",str);
	n=strlen(str);
	while(j<n)
	{
		for(i=0;i<n;i++)
		{
			if(str[i]=='I')
			{
				a[j]=1;
			}
			else if(str[i]=='V')
			{
				a[j]=5;
			}
			else
			{
				a[j]=10;
			}
			scanf("%d",&a[j]);
			j++;
		}
	}
	for(j=0;i<n;j++)
	{
	        	if(c>a[j])
		{
	            	c=c+a[j];
		}
		else
		{
			c=c-a[j];
		}
		printf("%d",c);
	}
		
	return 0;
}
