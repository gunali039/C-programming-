#include <stdio.h>

int main(void) {
	int N,A,D,i;
	scanf("%d\n",&N);
	scanf("%d\n",&A);
	scanf("%d\n",&D);
	int sum=0;
	for(i=0;i<N;i++)
	{
		sum=sum+A;
		A=A+D;
	
	}
	printf("%d",sum);
	return 0;
}
