#include<stdio.h>
int main(){

// Decalarations of character and float:
char operator;
float num1,num2, Addition,Subtraction,Multiplication,Division;

//Heading of calculator:
printf("*****************Calculator using switch statements:********************\n");


// Taking any operator from user:
printf("\nEnter operator:(+,-,*,/)\n");
scanf("%c",&operator);

//  Taking number 1 from user:  
printf("Enter number 1 \n");
scanf("%f",&num1);

//  Taking number 2 from user:
printf("Enter number 2 :\n");
scanf("%f",&num2);

// Switch statements starts from here :

switch(operator)
{
case '+':
Addition= num1 + num2;
printf("\n\t\t********\t ANSWER \t********\t\n");
printf("\n The Addition of these numbers are : %.0f",Addition);
break;
case '-':
Subtraction= num1 - num2;
printf("\n\t\t********\t ANSWER \t********\t\n");
printf("\n The Subraction of these numbers are : %.0f",Subtraction);
break;
case '*':
Multiplication = num1 * num2;
printf("\n\t\t********\t ANSWER \t********\t\n");
printf("\n The Multiplication of these numbers are : %.0f",Multiplication);
break;
case '/':
Division = num1 / num2;
printf("\n\t\t********\t ANSWER \t********\t\n");
printf("\n The Division of these numbers are : %.2f",Division);
break;
default:
printf("Error: Invalid operator.\n");
}

return 0;

}