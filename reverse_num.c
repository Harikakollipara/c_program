#include<stdio.h>
void main()
{
    int i,j,n=10;
    for(i=10;i>0;i--)
    {
        for(j=10;j>i;j--)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
}
