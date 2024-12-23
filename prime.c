#include<stdio.h>
void main()
{
    int n,i,count=0;
    printf("Enter the n value:\t");
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
      if(n%i==0)
      {
          count++;
      }
    }
    if(count==2)
    {
        printf("prime");
    }
    else
    {
        printf("Not prime");
    }
}
