#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	printf("The series is 1+1/2+1/3+1/4+.....1/n\n");
	printf("Enter the value of n");
	scanf("%d",&n);
	float sum;
	sum = 0.0f;
	for(int i=1 ; i<=n;i++)
	{
		sum = sum + ((float)1/(float)i);
	}
	printf("%f",sum);
	getch();
	return 0;
}