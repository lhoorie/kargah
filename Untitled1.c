#include <stdio.h>
int main()
{
	int a,b,p;
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
	if (op== '^')
	{
		ans=1;
		p=0;
		while(p<b)
		{
			ans *=a;
			p++;
		}
	}
	printf("%lf\n", ans);
	return 0;
}
