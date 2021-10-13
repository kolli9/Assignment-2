#include<stdio.h>
#include<string.h>

long int digit(char c)
{
    long int value=0;
    if(c=='I')
    {
        value=1;
    }
    else if(c=='V')
    {
        value=5;
    }
    else if(c=='X')
    {
        value=10;
    }
    else if(c=='L')
    {
        value=50;
    }
    else if(c=='C')
    {
        value=100;
    }
    else if(c=='D')
    {
        value=500;
    }
    else if(c=='M')
    {
        value=1000;
    }
    else if(c=='\0')
    {
        value=0;
    }
    else 
    {
        value=-1;
    }
    return value;

}
long int roman_To_decimal(char roman[])
{
    long int number=0;
    int i=0;
    while(roman[i])
    {
        if(digit(roman[i])<0)
        {
            return -1;
        }
        if((strlen(roman)-i)>2)
        {
            if(digit(roman[i])<digit(roman[i+2]))
            {
                return -1;
            }
        }
        if(digit(roman[i])>=digit(roman[i+1]))
        {
            number+=digit(roman[i]);
        }
        else
        {
            number+=digit(roman[i+1])-digit(roman[i]);
            i++;
        }
        i++;
    }
    return number;
}
long int decimal_To_roman(long int num)
{
    if(num<=0)
    {
        return -1;
    }
    while(num!=0)
    {
        if(num>=1000)
        {
            printf("M");
            num-=1000;
        }
        else if(num>=900)
        {
            printf("CM");
            num-=900;
        }
        else if(num>=500)
        {
            printf("D");
            num-=500;
        }
        else if(num>=400)
        {
            printf("CD");
            num-=400;
        }
        else if(num>=100)
        {
            printf("C");
            num-=100;
        }
        else if(num>=90)
        {
            printf("XC");
            num-=90;
        }
        else if(num>=50)
        {
            printf("L");
            num-=50;
        }
        else if(num>=40)
        {
            printf("XL");
            num-=40;
        }
        else if(num>=10)
        {
            printf("X");
            num-=10;
        }
        else if(num>=9)
        {
            printf("IX");
            num-=9;
        }
        else if(num>=5)
        {
            printf("V");
            num-=5;
        }
        else if(num>=4)
        {
            printf("IV");
            num-=4;
        }
        else if(num>=1)
        {
            printf("I");
            num-=1;
        }
    }
    
}

int main()
{
    while(1)
    {
        int choice;
        printf("Enter choice\n 1.Addition \n 2.Multiplication\n");
        scanf("%d",&choice);
        if(choice==1)
        {
            char a[1000],b[1000];
            printf("Enter two roman numerals:");
            scanf("%s %s",a,b);
            long int m = roman_To_decimal(a);
            long int n = roman_To_decimal(b);
            if(m==-1 ||n==-1)
            {
                printf("Invalid roman literal");
                break;
            }
            else 
            {
                long int sum = m+n;
                printf("The sum of %s %s is: ",a,b);
                decimal_To_roman(sum);
            }
            printf("\n");
        }
        else if(choice==2)
        {
            char a[1000],b[1000];
            printf("Enter two roman numerals:");
            scanf("%s %s",a,b);
            long int m = roman_To_decimal(a);
            long int n = roman_To_decimal(b);
            if(m==-1 || n==-1)
            {
                printf("Invalid roman literal");
                break;
            }
            else
            {
                long int product = m*n;
                printf("The product of %s %s is: ",a,b);
                decimal_To_roman(product);
            }
            printf("\n");
        }
        else
        {
            printf("Exist\n");
        }

    }
}