#include <stdio.h>
#include <stdlib.h>

int fac(a)
{
	if (a==1)
	{
		return 1;
	}
	if (a==0)
	{
		return 1;
	}
	else
	{
		return a*fac(a-1);
	}
}

int main()
{
	int a;
	scanf("%d" , &a);
	printf("%d",fac(a));
	getch();
	return 0;
}