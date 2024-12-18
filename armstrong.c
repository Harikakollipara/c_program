#include<stdio.h>
void main()
{
    int n,rem,result,sum=0,temp=n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
       rem=n%10;
       result=rem*rem*rem;
       sum=sum+result;
       n=n/10;
    }
    if(temp==sum)
    {
        printf("The number is armstrong number %d",sum);
    }
    else
    {
        printf("The number is not armstrong  number %d",sum);
    }
}
