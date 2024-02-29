#include<stdio.h>
int main(void){

int temperature; //this is  variable for a temperature which is been given  by user 
printf("------------Find out the temperature---------------\n");
printf("------------Enter temperature in degrees\n");
scanf("%d",&temperature);


if (temperature>=50)
{
    printf("Garmi bht ha \n");
}
else if (temperature>=40 &&temperature  <50)
{
    printf("Tora se garmi ha \n");
}
else if (temperature>=30 &&temperature<40)



{
    printf("Bus sahi ha mousam\n");
}
else if (temperature>=20 && temperature<30)
{
    printf("sardi ho rahi ha \n");
}
else if (temperature>=10 && temperature<20)
{
    printf("Bht sardi ho rahi ghar jao aap\n");

}
else if (temperature>=0 &&temperature<10)
{
    printf("beta sardi laag jai gi ghar jao \n");
}

else if (temperature<0)
{
    printf("tabiyat kharab ho jai gi apki\n");
}

getche();
}