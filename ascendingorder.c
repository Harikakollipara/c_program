#include<stdio.h>
void main()
{
    int i,j,a,n,number[20],s;
    printf("Elements size:\n");
    scanf("%d",&n);
    printf("enter the Element ");
    for(i=0;i<n;i++)
    scanf("%d",&number[i]);
     for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(number[i]>number[j])
            {
                a=number[i];
                number[i]=number[j];
                number[j]=a;
            }
        }
    }
     
   printf("the elemnts are arranged in ascending order\n");
   for(i=0;i<n;i++)
   printf("%d\t\n",number[i]);
   
}    
    
