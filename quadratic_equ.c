#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float r1,r2,d;
    printf("Enter a,b,c values: ",a,b,c);
    scanf("%d%d%d",&a,&b,&c);
    d=((b*b)-(4*a*c));
    if(d>0)
    {
        printf("The roots are real and distinct");
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
    }
    else if(d==0)
    {
        printf("The roots are real and equal");
        r1=r2=-b/(2*a);
    }
    else
    {
        printf("The roots are imaginary");
    }
    return 0;
}    
