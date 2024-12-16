#include<stdio.h>
void main()
{
 int n,i,sum1=0,sum2=0;
 printf("enter n values:");
 scanf("%d",&n);
 for(i=0;i<=n;i++)
 {
     if(i%2==0)
     {
         sum1=sum1+i;
     }
     else
     {
         sum2=sum2+i;
     }
 }
 printf("sum of even numbers:%d\n",sum1);
 printf("sum of odd numbers:%d\n",sum2);
 printf("difference between sum1 and sum2 is %d",sum1-sum2);
}
