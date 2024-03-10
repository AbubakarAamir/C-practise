// Made by :Abubakar Aamir.
//Write a program to find  ASCII code for a input number between 0 and 255:
#include<stdio.h>
int main(){

int number;
printf("\nEnter any number between 0 and 255:\n");
scanf("%d",&number);

switch (number)
{
case 0 ...     255:
    printf("The ASCII character for %d :is%c \n ",number,(char)number);

    break;

default:
printf("Error :invalid number:\n");
   
}
return 0;

}