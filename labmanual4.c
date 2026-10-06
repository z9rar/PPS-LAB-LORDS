#include<stdio.h>
int main ()
{
    int a,b;
    char choice;


    printf("Enter two numbers :");
    scanf("%d%d",&a,&b);
    printf("Enter an operator(+,-,/,%%):");

    scanf(" %c",&choice);
    switch(choice)
    {
        case '+':
            printf("Addition = %d\n" , a+b);
            break;
        case '-':
            printf("Substraction =%d\n" , a-b);
            break;
        case '*':
            printf("Multiplication = %d\n" , a*b);
            break;
        case '/':
            if (b!=0)
            printf("division by zero is not possible\n");
            break;

        case'%':
            if(b!=0)
                printf("modulus = %d\n",a%b);
            else
                printf("modulus by zero is not possible\n");
            break;
        default:
            printf("invalid operator\n");
    }
    return 0;

}
