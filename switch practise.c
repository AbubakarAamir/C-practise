#include<stdio.h>

int main(){

int day = 7;

printf("--------Enter any number from 7 to 1 to find out which day came on which date: \n");
scanf("%d",&day);
switch (day)
{
case 1:
    printf("Monday\n");
    break;
}
switch (day)
{
case 2:
    printf("Tuesday\n");
    break;
}
switch (day)
{
case 3:
    printf("Wednesday\n");
    break;
}
switch (day)
{
case 4:
    printf("Thursday\n");
    break;
}
switch (day)
{
case 5:
  printf("Friday\n");
    break;
}
switch (day)
{
case 6:
  printf("Saturday\n");
    break;

}
switch (day)
{
case 7:
  printf("Sunday\n");
    break;

default:
printf("puree week bhi bus itne he din hote ha bhai");
    
}

return 0;

}