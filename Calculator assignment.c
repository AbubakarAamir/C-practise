//Making calculator using switch statement:
//Made by:Abubakar aamir . 

#include <stdio.h>
#include <math.h>

// Function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int choice;
    double num1, num2, result;

    do {
        // Display menu
        printf("Press the number corresponding to the operation:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Factorial\n");
        printf("6. Even/Odd Check\n");
        printf("7. Sine\n");
        printf("8. Cosine\n");
        printf("9. Tangent\n");
        printf("10. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Perform operation based on user input
        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 + num2;
                printf("Result: %.2lf\n", result);
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 - num2;
                printf("Result: %.2lf\n", result);
                break;
            case 3:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 * num2;
                printf("Result: %.2lf\n", result);
                break;
            case 4:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2lf\n", result);
                } else {
                    printf("Error: Division by zero\n");
                }
                break;
            case 5:
                printf("Enter a number: ");
                scanf("%lf", &num1);
                result = factorial((int)num1);
                printf("Result: %.2lf\n", result);
                break;
            case 6:
                printf("Enter a number: ");
                scanf("%lf", &num1);
                if ((int)num1 % 2 == 0) {
                    printf("%.2lf is even\n", num1);
                } else {
                    printf("%.2lf is odd\n", num1);
                }
                break;
            case 7:
                printf("Enter a number in radians: ");
                scanf("%lf", &num1);
                result = sin(num1);
                printf("sin(%.2lf) = %.2lf\n", num1, result);
                break;
            case 8:
                printf("Enter a number in radians: ");
                scanf("%lf", &num1);
                result = cos(num1);
                printf("cos(%.2lf) = %.2lf\n", num1, result);
                break;
            case 9:
                printf("Enter a number in radians: ");
                scanf("%lf", &num1);
                result = tan(num1);
                printf("tan(%.2lf) = %.2lf\n", num1, result);
                break;
            case 10:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice\n");
        }

    } while (choice != 10);

    return 0;
}