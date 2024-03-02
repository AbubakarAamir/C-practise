
//Write a program that reads and prints the sum of three numbers? 
#include<stdio.h>
int main(){

    int a ,b ,c ,z; //declaration of a ,b,c and z  
    printf("\nEnter your first number\t");
    scanf("%d",&a);
    printf("\nEnter your second number\t");
    scanf("%d",&b);
    printf("\nEnter your third number\t ");
    scanf("%d",&c);
    z = a + b + c;
    printf("\nThe sum of three numbers is: %d",&z);
    return 0;

}