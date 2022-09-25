#include <stdio.h>
int sum(int m,int n);
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	printf("sum=%d\n",sum(m,n));
	return 0;
}
sum(int m,int n)
{
	int x;
	x=(m+n)*(n-m+1)/2;
	return (x);
}
