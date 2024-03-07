//Made by :Abubakat Aamir.

// Table of 2 using while loop:



//loops are used because they save time, reduce errors, and they make code more readable.
  

#include<stdio.h>
int main (){
	int num = 5;
	int i = 1;
	printf("Table of 5 using while loop\n");
	// yeh while condition check kare ga (ke agar i ke value 10 se kaam ho gi toh yeh 10 thak print karde ga :warna agar i ke value 10 se jada ho gi toh condition false ho jai gi 
	 while(i<=10){
	 	printf("%d x %d = %d \n",num,i,num*i);
	 	i++;
	 }
	
	
	return 0;
}