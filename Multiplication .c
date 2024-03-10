//Made by :Abubakar Aamir.
#include<stdio.h>
int main(){

int num; // Decaration of num:
//Take number  as an input from the user:
printf("Enter the  value of number whose multiplication table you wanted to print:) ");
scanf("%d",&num);
printf("The multiplication table of %d is \n:",num);

for (int i = 1; i <=10; i++)
{
    printf("%d x %d = %d\n",num,i,num*i);
}




    return 0;

}