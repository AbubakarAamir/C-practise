//Made by Abubakar Aamir 

#include<stdio.h>
#include<math.h>
int main(){
	
	// double ka format specifier %lf hota ha 
	//  double holds (8)bytes.	Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits
	double num1 ,num2; // double is a special data type in c language because its holds and handle really big number.
	int choice;

//yaha humne user se poch rahe ke apne konsa operation perform karna ha : printf() ka function use karke . 
	printf("Enter 1 : For Addition\n");
	printf("Enter 2 : for subtraction \n");
	printf("Enter 3 : For Multiplication\n ");
	printf("Enter 4 : for Division\n");
    printf("Enter 5 : for check even or odd\n");
	printf("Enter 6 : For Factorial\n");
	printf("Enter 7 :to find : cos \n");
	printf("Enter 8 : to find :sin \n");
	printf("Enter 9 : for exist\n");
	scanf("%d",&choice);
	
	switch(choice){
		case 1: 
		printf("Enter two numbers \n");
		scanf("%lf",&num1 ); 
		scanf("%lf",&num2);
		printf("Result : %lf\n ",num1 + num2);
		break;
		
		
		case 2: 
		printf("Enter two numbers \n");
		scanf("%lf",&num1 );
		scanf("%lf",&num2);
		printf("Result : %lf\n ",num1 - num2);
		break;
		
		
		case 3: 
		printf("Enter two numbers \n");
		scanf("%lf",&num1 );
		scanf("%lf",&num2);
		printf("Result : %lf\n ",num1 * num2);
		break;
		
		
		case 4: 
		printf("Enter two numbers \n");
		scanf("%lf",&num1 );
		scanf("%lf",&num2);
		printf("Result : %lf\n ",num1 / num2);
		break;
		
		
		case 5 :
			printf("Enter two numbers \n");
			scanf("%lf",&num1);
			if((int)num1 % 2 ==0){
				
				printf("Its even\n");
			}
			else {
				printf("Its odd\n");
			}
			break;
			
		case 6 :
		printf("Enter  number \n");
		scanf("%lf",&num1);
		if (num1 < 0){
			
			printf("Factorial is not defined for negative numbers \n");
		}	
		else {
			int factorial_result = 1;
			for (int i = 1; i <= num1; ++i ){
				factorial_result *=i;
			}
			printf("Result :%d\n ",factorial_result );
		}
		break;
		  case 7 :
		  	printf("Enter an angle:\n");
		  	scanf("%lf ",&num1 );
		  	printf("Result : %lf \n ",cos (num1));
		  	break;
		  	
		  	case 8 :
			  printf("Enter an angle:\n");
			  scanf("%lf ",&num1 );
			  printf("Result :%lf \n",sin (num1));
			  break;
			  
			  case 9 :
			  	printf("Do you want to continue or not\n");
			  	break;
			  	dafault:
			  		printf("Invalid operator \n");
			  		
		
		
		
	}
		
	
	
	return 0;
}