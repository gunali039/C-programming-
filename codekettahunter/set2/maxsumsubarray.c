#include<stdio.h>
#include<math.h>
int main(void)
{
	int a[100];
	int n,i,j,m,sum=0,sum1=0,rans=0,ans,lans=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	if(n==1)
	{
		sum=a[0];
		ans=sum;
	}
	else
	{
		m=n/2;
		for(i=0;i<m;i++)
		{
			sum=sum+a[i];
			if(rans<sum)
			{
				rans=sum;
			}
			else
			{
				rans=rans;
			}
		
		}
		for(i=m;i<n;i++)
		{
			sum1=sum1+a[i];
			if(lans<sum1)
			{
				lans=sum1;
			}
			else
			{
				lans=lans;
			}
		
		}
	     if(lans<rans)
			{
				ans=rans;
			}
			else if(lans==rans)
			{
				ans=lans+rans;
			}else
			{
				ans=lans;
			}
	}
	
printf("%d",ans);	
}
