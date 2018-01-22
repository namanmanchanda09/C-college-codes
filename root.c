#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int a,b,c,d;
    float r1,r2,real,img;
    printf("Enter 3 numbers");
    scanf("%d%d%d",&a,&b,&c);
    d=pow(b,2)-(4*a*c);
    if (d>0)
    {
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("Roots are %f%f",r1,r2);
    }
    else if (d==0)
    {
        r1=r2=-b/(2*a);
        printf("Roots are %f%f",r1,r2);
    }
    else
    {real=-b/(2*a);
    img=sqrt(abs(d))/(2*a);
    printf("Roots are %f+i%f and %f-i%f",real,img,real,img);
    getch();

    }
}



