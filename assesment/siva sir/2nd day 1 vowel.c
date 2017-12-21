#include<stdio.h>
#include<string.h>
int main(void)
{
	char str1[10],str2[10],str[10];
	int i,n;
	scanf("%s",str1);
	n=strlen(str1);
	printf("%d\n",n);
	for(i=n-1;i>=0;i--)
	{
		str2[i]=str1[i];
		scanf("%c",&str2[i]);
		printf("%c",str2[i]);
	}
	for(i=n-1;i>=0;i--)
               {
	     if(str2[i]=='a'||str2[i]=='A'||str2[i]=='E'||str2[i]=='e'||str2[i]=='i'||str2[i]=='I'||str2[i]=='O'||str2[i]=='o'||str2[i]=='U'||str2[i]=='u')
		{
		continue;
		}
		else
		{
		   printf(" %c",str2[i]);
		}
		
	}

	
    

return 0;
}
