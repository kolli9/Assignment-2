#include <stdio.h>

int main() 
{
    while(1)
    {
        int choice;
        printf("Select choice \n 1.Addition \n 2.Multiplication \n ");
        scanf("%d",&choice);
        if(choice==1)
        {
            long long int a,b,sum;
            printf("Enter the values of two decimal numbers: ");
            scanf("%lld %lld",&a,&b);
            sum=a+b;
            printf("sum of %lld and %lld is %lld\n",a,b,sum);
        }
        else if(choice==2)
        {
            long long int a,b,product;
            printf("Enter the values of two decimal numbers: ");
            scanf("%lld %lld",&a,&b);
            product=a*b;
            printf("product of %lld and %lld is %lld\n",a,b,product);
        }
        else
       {
            printf("Exist\n");
       }
    }
}