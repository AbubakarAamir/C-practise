//Write a c program to print the following star pattern for a generalized value of n:
//****
//***
//**
//*

#include<stdio.h>
int main(){

int n = 4;
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        if (j>=1)
        {
            printf("*");
        }
        else{
            printf(" ");
        }
        printf("\n");
        
    }
    
}




    return 0;

}