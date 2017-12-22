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
			flag=0;
		
		            if(n%2!=0)
	                  	{
		                  flag=1;
		                  break;
	                  	}
	                  	else
	                  	{
				         d=n/2;
			         	    if(d%2==0&&d==2)
				            {
					       flag=0;
					        break;
				          }
				         }
				         n=n/2;
	
		}
		if(flag==0)
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
