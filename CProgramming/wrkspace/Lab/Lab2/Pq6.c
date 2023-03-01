/* WACP that reads two numbers and divide the first number by second number.
If the division not possible print "Division not possible".*/
#include<stdio.h>
int main(){
      int a,b;
      printf("Enter the values:");
      scanf("%d%d",&a,&b);
      if(a%b==0){
        printf("Divisible!\n");

      }
      else{
        printf("Divison not Posssible!");
      }



}
