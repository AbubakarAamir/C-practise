
#include <stdio.h>

int main() {
    int number;

    printf("Enter a number between 0 and 255: ");
    scanf("%d", &number);

    switch (number) {
        case 0 ... 255:
        //In this printf we change the type of the data by using (type script):
            printf("The ASCII character for %d is: %c\n", number, (char)number);
            break;
        default:
            printf("Invalid input! Please enter a number between 0 and 255.\n");
            return 1;
    }

    return 0;
}