#include<stdio.h>

void main()
{
    int n,copy=152,remainder,sum,x;

    printf("Enter a number\n");
    scanf("%d",&n);
    //starting copy from 152 as we know 153 is an armstron no

    printf("Armstrong numbers are\n");
    while(n!=0)
    {
        copy++;
        x=copy;
        sum=0;
        //printf("\n2nd copy = %d ",copy);            
        while(copy!=0)
        {
            remainder=copy%10;
            sum=sum+remainder*remainder*remainder;
            copy=copy/10;
        }
        if(sum==x)
        {
            printf("\n%d",x);
            n--;
        }
        copy=x;
    }
}
