#include<stdio.h>
void main()
{
    int n,rem,rev=0,result,temp;
    printf("Enter the number:\n");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
      
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(temp==rev)
    {
        printf("The number is palindrome number %d",rev);
    }
    else
    {
        printf("The number is not palindrome number %d",rev);
    }
}
