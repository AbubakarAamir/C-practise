               // Marks sheets of a students using c language:
#include<stdio.h>
#include<string.h>

int main(){

    char Name [30];      //character data type:
    char Fathername[30];  //character data type:
     
     int rollno,class,calculus,pst,Pf,english,Ds,obtained,percentage,obtained;    //These all are integar variables
     
  // This is for name:
     printf("Enter your name!\n");
     scanf("%s",&Name);
//  This is for father name:
     printf("Enter your Father name! \n");
     scanf("%s",&Fathername);
 // This is for roll number:
    printf("Enter your roll number! \n");
    scanf("%d",&rollno);
 //This is for semeter :
   printf("Enter your semeter! \n");
   scanf("%d",&class);

   // yaha se hum subjects ke marks le gae user se :

  //This is for calculus subject:
printf("Enter your Calculus marks here! \n ");
scanf("%d",&calculus);

  //This is for english subject:
printf("Enter your English marks here! \n");
scanf("%d",&english);

//This is for pst subject:
printf("Enter your Pst marks here! \n");
scanf("%d",&pst);

// This is for Discrete structure:
printf("Enter your Discrete marks here! \n");
scanf("%d",&Ds);

//This is for programming fundamentals:
printf("Enter your Programming fundamentals marks here! \n");
scanf("%d",&Pf);

//Then we use obtained integar:
   // (obtained integar ke andar sare subjects ke marks + karwa de gae  )

obtained = english + Pf + Ds + pst + calculus;

percentage = obtained * 100 /500;


printf("-----------Marksheets-------------------");
printf("Your Name is %s \n",Name);
printf("Your Father Name is %s \n",Fathername);
printf("Your Class is %d \n",class);
printf("Your Roll no  is %d \n",rollno);
printf("Your obtained marks  is %d \n",obtained);
printf("Your percentage is %d \n",percentage);

if (percentage>=80)
{
    printf("Grade A-1 \n");
}
else if (percentage>=70)
{
    printf("Grade A \n");
}
 else if (percentage>=60)
 {
    printf("Grade B\n");
 }
 else if (percentage>=50)
 {
    printf("Grade C");
 }
 else if (percentage>=40)
 {
    printf("Grade D \n");
 }
 else if (percentage>=33)
 {
    printf("Grade E\n");
 }
 else{
    printf("Grade F== fail \n");
 }
 
 
 if (percentage>=80)
 {
    printf(" Remarks:Exellent \n");
 }
 else if (percentage>=70)
 {
    printf("Remarks:very good \n");
 }
 else if (percentage>=60)
 {
    printf(" Remarks:good\n");
 }
 else if (percentage>=50)
 {
    printf(" Remarks:fair \n");
 }
 
 else if (percentage>=40)
 {
    printf(" Remarks:poor \n");
 }
 else if (percentage>=33)
 {
    printf(" Remarks:You need alot of improvement \n");
 }
 
else{
    printf("Remarks: bring your parents tomorrow \n");
}
 
 
 








return 0;

}