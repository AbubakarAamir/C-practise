//Making calculator using switch statement:
//Made by:Abubakar aamir . 

#include <stdio.h>
int main()
{

    char operator;
    double num1, num2;
    printf("Enter any operator('+','-','*','/' ) : \n");
    scanf("%c", &operator);

    printf("Enter two operands :\n");
    scanf("%lf %lf", &num1, num2);

    switch (operator)
    {
    case '+':
        printf("%.2lf + %2.lf = %2.lf", num1, num2, num1 + num2);

        break;

    case '-':
        printf("%.2lf - %2.lf = %2.lf", num1, num2, num1 - num2);

        break;

    case '*':
        printf("%2.lf * %2.lf = %2.lf", num1, num2, num1 * num2);

    case '/':
        if (num2 = 0)

            printf("%2.lf / %2.lf = %2.lf", num1, num2, num1 / num2);

        else
            printf("cannot divide by zero:\n");
        break;

    default:

        printf("Invalid operator:");
        break;
    }

    return 0;
}