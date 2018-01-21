#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int a,s,p;
	double r,n;
	scanf("%d %I64u %I64u",&a,&r,&n);
	p = double pow(r,n);
	s = (a*(1-p))/(1-r);
	printf("%d",s);
	getch();
	return 0;
}



  