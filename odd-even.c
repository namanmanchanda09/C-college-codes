#include <stdio.h>
#include <stdlib.h>
int main()
{
int num;
printf("Enter the Number");
scanf("%d" , &num);

if (num%2==0)
{
    printf("Number is EVEN ");
}
else{
        printf("Number is ODD ");
}
getch();
return 0;
}
