/* WACP that reads two integers and checks wheather they are multiplied or not. */
#include<stdio.h>
int main()
{

      int a,b;
      printf("Enter the values:");
      scanf("%d%d",&a,&b);
      if(a%b==0)
      {
        printf("Multiplied!\n");
      }
      else
      {
        printf("Not Multiplied!");
      }

}