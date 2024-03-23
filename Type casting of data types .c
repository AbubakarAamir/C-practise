#include <stdio.h>

int main() {
    int num1 = 10;
    float num2 = 20.5;
    double num3 = 30.75;
    char letter = 'A';

            //Type casting: aik data type se dusre data type per jana ha toh typecasting ho gi 
    // Typecasting integer to float
    float floatNum1 = (float)num1;
    printf("Integer to Float: %f\n", floatNum1);

    // Typecasting float to integer
    int intNum2 = (int)num2;
    printf("Float to Integer: %d\n", intNum2);

    // Typecasting double to float
    float floatNum3 = (float)num3;
    printf("Double to Float: %f\n", floatNum3);

    // Typecasting char to int
    int charToNum = (int)letter;
    printf("Char to Integer: %d\n", charToNum);

    return 0;
}


//In this code:

//- We have variables of different data types: int, float, double, and char.
//- We demonstrate typecasting between these data types:
 // - Integer to Float (int to float).
 // - Float to Integer (float to int).
  //- Double to Float (double to float).
  //- Char to Integer (char to int).
//- We use typecasting (datatype) before the variable name to convert it to the desired data type.
//- Finally, we print out the typecasted values to see the result.