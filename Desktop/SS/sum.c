
#include <stdio.h>
#include <stdlib.h>

int main(){

   int num1, num2, num3, num4, sum;
   int choice;

   printf("Choose the first number");
   scanf("%f",&num1);
   printf("Choose the second number");
   scanf("%f",&num2);
   printf("Choose the third number");
   scanf("%f",&num3);
   printf("Choose the fourth number");
   scanf("%f",&num4);
   printf("1.+\n");
   printf("Choose the operator");
   scanf("%f",&choice);

 switch(choice){
   case 1:
       sum=num1+num2+num3+num4;
       printf("The sum is %f",sum);
       break;

 }
        return 0;
}




