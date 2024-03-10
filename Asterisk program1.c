//Made by :Abubakar Aamir.

//print the following star pattern .The number of lines in the patternshould be equal to the value entered by the user.The pattern looks like this for n = 4
//*
//**
//***
//**** 
#include<stdio.h>
 int main(){
 int n; // Decalartion of a integar data type:
 printf("Enter the value of n :\n"); 	//	 This is the heading of our program :
 scanf("%d",&n); 	//	 (yaha thak humne user se input le liya):
 for (int  i =0 ; i < n; i++) 	//	 (int i= 0)==> called intialization : (i< n)==> called condtion: (i++)==>called increament 
  {
	
	for (int  j = 0; j < i+1; j++) //Nested loop:(a loop with in a loop is called nested loop):

	{
		printf("*"); 
	}
	
	printf("\n");
 }
 

return 0;
}