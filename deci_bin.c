#include<stdio.h>
#include<math.h>

void deci_to_bin(int);
void bin_to_deci(int);
int main()
{
    int b,d,c;
    while(1)
    {
        printf("\n\n1.To convert binary to decimal");
        printf("\n2.To convert decimal to binary");
        printf("\nEnter your choice: ");
        scanf("%d",&c);
        switch(c)
        {
        case 1: printf("\nEnter binary number: ");
                scanf("%d",&b);
                bin_to_deci(b);
                break;
        case 2: printf("\nEnter decimal number: ");
                scanf("%d",&d);
                deci_to_bin(d);
                break;
        default : printf("\nInvalid choice!!!");

        }
    }
    return 0;

}


void deci_to_bin(int n)
{
    int num,s=0,i=0,j=0,num1;
    num1=n;
    while(n>0)
    {
        num=n%2;
        s=s*10+num;
        n=n/2;
        i++;
    }
    n=s;
    s=0;
    while(j!=i)
    {
        num=n%10;
        s=s*10+num;
        n=n/10;
        j++;
    }
printf("\Corresponding binary number to decimal %d is %d",num1,s);

}

void bin_to_deci(int n1)
{
    int s=0,i=0,num,num1;
    num1=n1;
    while(n1>0)
    {
        num=n1%10;
        s=s+num*pow(2,i);
        n1=n1/10;
        i++;
    }

printf("\Corresponding decimal number to binary %d is %d,",num1,s);

}






