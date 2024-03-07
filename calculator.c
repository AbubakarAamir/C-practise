//Calculator using if else staements:
//Made by:Abubakar Aamir :
#include<stdio.h>
int main(){
    int number1 ,number2,choice;
    int result;
    printf("Enter number 1 for addition :\n"); 
    printf("Enter number 2 for subtraction: \n");
    printf("Enter the number 3 for multiplication: \n");
    printf("Enter number 4 for division : \n");
    scanf("%d",&choice);
    if (choice>4)
    {
        printf("Wrong please enter the valid input ! \n" );
    }
    else  {
        printf("Enter two values :\n");
        scanf("%d%d",&number1,&number2);
    }
    if (choice==1)
    {
        result = number1 +number2;
        printf("The result of addition is : %d" ,result);
    }
     else if (choice==2){
        result = number1 - number2;
        printf("The result of subtraction is : %d",result);
     }
     else if (choice==3)
     {
       result = number1 * number2;
       printf("The result of multiplication is : %d",result);
     }
     else if (choice==4)
     if(number2==0){
        printf("Cant divide by zero!!!");
     }
     else{
         result = number1 /number2;
        printf("The result of division is : %d",result);
     }
     {
        
     }
     
    
   return 0; 
}
