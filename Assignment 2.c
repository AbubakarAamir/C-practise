//Write a program to check wheather a triangle  is valid or not ,when the three angles of the triangle are entered through a user .A triangle is valid if the sum of all three angles is 180 degrees ?
//Homework Assignment 
//Made by Abubakar Aamir 

#include<stdio.h>
int main()
{
	//Dealaration of integar data type :
	int angle_1;
	int angle_2;
	int angle_3;
	
	//here user can entered angles of traingle
	printf("Make the triangle by given three angles :\n");
	//First angle.
	printf("Enter the first angle :\n");
	scanf("%d",&angle_1);
	//Second angle .
	printf("Enter the second angle :\n");
	scanf("%d",&angle_2);
	//Third angle .
	printf("Enter the third angle : \n");
	scanf("%d",&angle_3);
	
	//using if / else condtion . 
	if(angle_1 + angle_2 + angle_3 ==180){
		printf("Triangle is valid \n");
	}
	else{
		printf("The triangle is not valid \n");
	}
	
	return 0;
	
}