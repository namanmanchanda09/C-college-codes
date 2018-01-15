#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	scanf("%d" , &a);
	if (a%4 == 0)
	{
		if (a%100 == 0)
		{
			if (a%400 == 0)
			{
				printf("leap year");
			}
			else
			{
				printf("not leap year");
			}
		}
		else
		{
			printf("leap year");
		}
	}
	else
	{
		printf("not leap year");
	}
	getch();
	return 0;
}
		
			
				