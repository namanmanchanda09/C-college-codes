#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main () 
{
	int a,r,n,p,s;
	scanf("%d %d %d", &a,&r,&n);
	p = pow(r,n);
	s = (a*(1-p))/(1-r);
	printf("%d",s);
	getch();
	return 0;
}
 
 
 
