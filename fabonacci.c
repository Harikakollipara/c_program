#include<stdio.h>
void main()
{
    int n,i,c;
    int a=0,b=1;
    printf("enter the value of n:");
    scanf("%d",&n);
    printf("the value of a and b is %d%d\n",a,b);
    for(i=2;i<n;++i)
    {
        c=a+b;
        printf("%d",c);
        a=b;
        b=c;
    }
    printf("THe fibonacci series is %d",n);
}
