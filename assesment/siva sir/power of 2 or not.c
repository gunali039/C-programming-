#include <stdio.h>

int main(void) {
	int n,d,i,flag;
	scanf("%d",&n);
	if(n==2)
	{
		printf("It is the power of 2\n");
	}
	else
	{
		for(i=0;i<n;i++)
		{
		
		            if(n%2==0)
	                  	{
		                  flag=0;
				d=n/2;
				if(d%2==0&&d==2)
				{
					flag=flag+1;
					break;
				}
				else
				{
				n=d;
				continue;
			             }
	                       }
	
		}
		if(flag==1)
 	            {
		printf("It is the power of 2\n");
             	}
	            else
	           {
		printf("It is not the power of 2\n");
	            }
	}
	
	
	

	return 0;
}
