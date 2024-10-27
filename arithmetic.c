#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("Enter any two values:",a,b);
    scanf("%d%d",&a,&b);
    printf("choose which operation to do\n1.addition\n2.subtraction\n3.multiplication\n4.division\n");
    scanf("%d",&c);
    switch(c)
    {
    case 1:
    printf("addition:%d",a,b,a+b);
    break;
    case 2:
    printf("subtraction of two numbers:%d",a,b,a-b);
    break;
    case 3:
    printf("multiplication of two numbers:%d",a,b,a*b);
    break;
    case 4:
    printf("division of two numbers:%d",a,b,a/b);
    break;
    default:
    printf("default choice\n");
    break;
    }
    return 0;
}
