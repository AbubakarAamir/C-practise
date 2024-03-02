//Write a program that finds out the largest number among three input numbers?
#include<stdio.h>
int main(){
    int a , b ,c;
   printf("\nEnter first number:\t");
   scanf("%d",&a);
   printf("\nEnter the second number\t");
   scanf("%d",&b);
   printf("\nEnter the third number\t");
   scanf("%d",&c);
   if (a>b &&a>c)
   {
    printf("\n first number is greater that %d",a);

   }
   else if (b>a && b>c)
   {
    printf("\nSecond number is greater that %d",b);
   }
   else{
    printf("\nThird number is greater than is %d",c);
   }
   
return 0;
   
}  