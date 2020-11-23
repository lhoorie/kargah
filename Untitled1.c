#include <stdio.h>
int main()
{
	int a,b;
	double ans=0;
	char op;
	printf("enter: ");
	scanf("%d%c%d",&a,&op,&b);
	if (op == '+')
		ans= a+b;
	if (op== '-')
		ans=a-b;
	if (op=='*')
		ans=a*b;
	if (op=='/')
		ans=(double)a/b;
	printf("%lf\n", ans);
	return 0;
}
