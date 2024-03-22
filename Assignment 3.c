//Made by :Abubakar Aamir
//If the ages of wasim akram ,jawaid miandad and imran khan are input through the user .Write a program to determine the youngest of the three ?
#include<stdio.h>
int main(){

int wasim_age;
int imran_age;
int jawaid_age;

printf("Enter the age of wasim-akram :\n");
scanf("%d",&wasim_age);

printf("Enter the age of imran-khan :\n");
scanf("%d",&imran_age);

printf("Enter the age of jawaid-maiandad\n");
scanf("%d",&jawaid_age);


if (wasim_age<jawaid_age && wasim_age<imran_age)
{
    printf("wasim-akram is the youngest among them\n");

}
else if (jawaid_age<imran_age && jawaid_age<wasim_age)
{
    printf("jawaid miandad is the youngest among them\n");

}
else{
    printf("Imran khan is the youngest one \n");
}



    return 0;
}