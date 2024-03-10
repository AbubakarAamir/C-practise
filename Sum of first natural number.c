//Made by:Abubakar Aamir.
//Find sum of first n natural number:
#include<stdio.h>
int main(){
//sum 1 + 2 + 3 + 4 + 5....................+ n and so on:
int n,sum = 0;
printf("Enter the last natural numbers you want to sum:\n");
scanf("%d",&n);
//Run in linear time:(Yeh bara se bara kar tu le ga lekin overflow kare ga aur time bhi zada lagae ga)
// for (int i = 1; i <=n; i++)
// {
//     sum +=i;
// }

//Run in constant time:(Yeh bara se bara sum bhi karta ha aur overflow nhi hota aur jaldi karta ha )
sum = (n*n + n )/2; // This is the mathematical formula of to find sum of natural number:

printf("The sum of first %d natural numbers is %d \n ",n,sum);


printf("\nWould you like it?");

    return 0;

}