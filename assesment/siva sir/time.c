#include <stdio.h>

int main(void) {
	char a[10],b[10];
	int n1,n2,h1,m1,h2,m2,i,oh,om,t,t1,t2;
	scanf("%s",a);
	n1=strlen(a);
	printf("%d\n",n1);
	scanf("%s",b);
	n2=strlen(b);
	printf("%d\n",n2);
	for(i=0;i<4;i++)
	{
		if(a[i]==':')
		{
			h1=a[i-1];
			m1=a[i+1];
		}
	
	}
	printf("%c\n",h1);
	printf("%c\n",m1);
	for(i=0;i<4;i++)
	{
		if(b[i]==':')
		{
			h2=b[i-1];
			m2=b[i+1];
		}
	}
	printf("%c\n",h2);
	printf("%c\n",m2);
	t1=h1*60+m1;
	t2=h2*60+m2;
	if(t1>t2)
	{
	    t=t1-t2;	
	}
	else
	{
	   t=t2-t1;
	}
	oh=t/60;
	om=t%60;
	printf("%d:%d",oh,om);
	return 0;
}
