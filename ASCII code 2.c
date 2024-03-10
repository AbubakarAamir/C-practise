// Made by :Abubakar Aamir.
//Write a program to find ASCII code for a input character:

#include<stdio.h>
int main(){

char a;
printf("\n Enter any character:\n");
scanf("%c",&a);


switch (a)
{
case  0 ...     255 :
    printf("\n The ASCII character for %c is :%d ",a,(int)a);

    break;

default:

printf("Error invalid alphabet\n");

  
}
return 0;
}