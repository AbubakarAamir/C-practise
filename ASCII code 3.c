// Made by :Abubakar Aamir. 

//Write a program to find ASCII code for capital and small letters according to user input number:


#include<stdio.h>
int main(){

    int number;
    printf("\nEnter any number between :\n[65-90]for capital alphabets and [97-122] for small alphabets:\n");
    scanf("%d",&number);

switch (number)
{
case 65 ...  90 :
    printf("\nThe ASCII character for %d is :%c",number,(char)number);

    break;

    case 97 ...  122:
    printf("\nThe ASCII character for %d  is %c",number,(char)number);
    break;

default:

printf("\nError invalid number ");

    break;
}

return 0;

}