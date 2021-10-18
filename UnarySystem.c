#include<stdio.h>
#include<string.h>

int main()
{
    while(1)
    {
        int choice;
        printf("Enter choice\n 1.Addition\n 2.Multiplication\n");
        scanf("%d",&choice);
        if(choice==1)
        {
            char a[20],b[20],c[20];
            printf("Enter two unary numbers: ");
            scanf("%s %s",a,b);
            strcpy(c,b);
            strcat(b,a);
            printf("The addition of %s and %s is: %s ",a,c,b);
            printf("\n");
        }
        else if(choice==2)
        {
            char a[20],b[20],c[100];
            printf("Enter two unary numbers: ");
            scanf("%s %s",a,b);
            int i,n;
            n=strlen(a);
            printf("The product of %s and %s is: ",a,b);
            for(i=0;i<n;i++)
            {
                printf("%s",b);
            }
            printf("\n");
        }
        else
        {
            printf("Exist\n");
        }
    }
}