//Made by :Abubakar Aamir.
//C Program to Sort Array Elements in descending :
#include<stdio.h>
int main(){

int a[10];
int i,j,temp;
printf("Enter array elements:)\n");
for ( i = 0; i < 10; i++)
{
    scanf("%d",&a[i]);
}
for (i = 0; i < 10; i++)
{
    for (j = i+1; j<10; j++ )
    {
        if (a[i]<a[j])
        {
            temp = a[i];
            a [i] = a[j];
            a[j] = temp;

        }
        
    }
    
}
printf(" Array elements:)\n");
for ( i = 0; i < 10; i++)
{
    printf("%d",a[i]);
}
printf("\n***********All numbers are sorted in descending order***********\n");



    return 0;
}