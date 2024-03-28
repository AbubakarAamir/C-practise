//Made by: Abubakar Aamir
  
                         //Functions:
   
//A function is a block of code which only runs when it is called.
//You can pass data, known as parameters, into a function.example :(inta ,intb) yeh parameter hote ha jo round bracket ke anadar likhe hote ha  


// functions 2 types ke hote ha:
//(1):Library function or predefined functions .
//(yeh woh hote ha jo C language  khud provide karta ha jaise ke (printf)yeh aik function ha.ase he (scanf)yeh bhi function ha)
//(2):Userdefined function:jaise ke naam se he pata laag raha ha ke yeh woh function hote ha jo user khud banata ha 


//Void: means that the function does not have a return value.
  //Yaha humne aik function banaya ha hello naam ka :
//   #include<stdio.h>
// void Hello(){
//     printf("I make the first function in c language\n");
// }


// int main(){

//Hello();  yaha apne apna function call karlia ha jo upper humne banaya tha hello naam ka .jab bhi function call kare gae wo ajai ga .jitni baar call karo gae function ko wo ajai ga 
//hello();    function ko call ho toh ase kare gae ** any function name(); 
//Hello();A function can be called multiple times: koi masle ki baat nhi ha .

//     return 0;
// }  
                    //Parameters and Arguments
//Information can be passed to functions as a parameter. Parameters act as variables inside the function.
//Parameters are specified after the function name, inside the parentheses. You can add as many parameters as you want, just separate them with a comma:
   //Example:

//returnType functionName(parameter1, parameter2, parameter3) {
  // code to be executed}

//   #include<stdio.h>
//   void greetings (char salam[]){

//     printf("ASSLAM ALIKUM : %s \n",salam);
//   }

//   int main(){

// greetings("Abubakar");
// greetings("Ali");
// greetings("Ahmed" );
// greetings("Samad");
// greetings("Faizan");


// return 0;
//   }



// #include<stdio.h>
// void myFunction(char name[], int age) {
//   printf("Hello %s. You are %d years old.\n", name, age);
// }

// int main() {
//   myFunction("Abubakar", 3);
//   myFunction("Ali", 14);
//   myFunction("Ahmed", 30);


//   return 0;
// }

 
                   //You can also pass arrays to a function:

// #include<stdio.h>
// void myFunction(int myNumbers[5]) {
//   for (int i = 0; i < 5; i++) {
//     printf("%d\n", myNumbers[i]);
//   }
// }

// int main() {
//   int myNumbers[5] = {10, 20, 30, 40, 50};
//   myFunction(myNumbers);
//   return 0;
// }


//  The void keyword, used in the previous examples, indicates that the function should not return a value. If you want the function to return a value, you can use a data type (such as int or float, etc.)

//For integar :
// #include<stdio.h>
// int myFunction(int x) {
//   return 5 + x;
// }

// int main() {
//   printf("Result is: %d", myFunction(3));
//   return 0;
// }

//for Float:


// #include<stdio.h>
// float myfunction(float x){
// 	return 3.14 + x;
// 	}
	
// 	int main(){
		
// 		printf("The total tax is %f ",myfunction(2.4));
		
// 		return 0;
// 	}


// This function take two parameters in double data type : 
// #include<stdio.h>
//  double myfunction(double x ,double y){
//     return x - y ; 
//  }
//  int main (){


//     printf("Your house rent is %lf ",myfunction(144444.53,.44544676));
//     return 0;
//  }




#include<stdio.h>
// Function to convert Fahrenheit to Celsius
float toCelsius(float fahrenheit) {
  return (5.0 / 9.0) * (fahrenheit - 32.0);
}

int main() {
  // Set a fahrenheit value
  float f_value = 98.8;

  // Call the function with the fahrenheit value
  float result = toCelsius(f_value);

  // Print the fahrenheit value
  printf("Fahrenheit: %.2f\n", f_value);

  // Print the result
  printf("Convert Fahrenheit to Celsius: %.2f\n", result);

  return 0;
}










