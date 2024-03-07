#include<stdio.h>
int main(){

int i;//Declaration of a variable:
//In this  i = 0 (Varaiable intialiazation), i <20 (agar i 20 se chota ho ga toh condition true ho jai gi aur condition 20 thak jai gi),i++ (yeh increament kare ga phir):  
for (i = 0; i < 20; i++) {
  if (i == 14) {
    break;
  }
  printf("%d\n", i);
}


return 0;
}







