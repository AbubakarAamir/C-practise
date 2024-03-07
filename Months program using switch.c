#include <stdio.h>
int main()
{

    int month;
    printf("Enter any number from 1 t0 11:\n");
    scanf("%d", &month);

    switch (month)
    {
    case 1:
        printf(" 1 Month is : January\n");

        break;

    case 2:
        printf(" 2 Month is : Febuary\n");
        break;
    case 3:
        printf(" 3 Month is : March\n");
        break;
    case 4:
        printf(" 4 Month is : April \n");
        break;

    case 5:
        printf(" 5 Month is : May\n");
        break;
    case 6:
        printf(" 6  Month is : June\n");
        break;
    case 7:
        printf(" 7 Month is : July \n");
        break;

    case 8:
        printf(" 8  Month is : August\n");
        break;
    case 9:
        printf(" 9  Month is : Semptember\n");
        break;

    case 10:
        printf(" 10  Month is : November \n");
        break;

    case 11:
        printf(" 11  Month is : December\n");
        break;

    default:
        printf("Bro there is only 11 days in months ");

        break;
    }


    return 0;
}

