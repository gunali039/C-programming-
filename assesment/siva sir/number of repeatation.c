#include <stdio.h>

int main(void) {
		char a[10];
	int i,j,n,temp,c,flag;
	gets(a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		c=1;flag=0;
		for(j=i+1;j<n;j++)
		{
			if(a[j]==a[i]&&a[i]!='\0')
			{
				c++;
				a[j]='\0';
				flag=flag+1;
			}
		}
		if(a[i]!='\0'&&flag==1)
		{
	
	
		printf("%c-%d\n",a[i],c);
		}
		else
		{
			printf("");
		}
	}
	
	return 0;
}
