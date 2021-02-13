#include<stdio.h>
int main()
{
    char operation;
    float number_1,number_2;
    double result;
    printf("enter 1st operand: ");
    scanf("%f",&number_1);
    printf("enter the operation: ");
    scanf("%c",&operation);
    printf("enter 2nd operand: ");
    scanf("%f",&number_2);
    switch (operation) 
   {
       case '+': 
       result=number_1+number_2;
       printf("addition performed is %lf",result); 
               break; 
       case '-':
       result=number_1-number_2;
       printf("subtraction is %lf",result); 
                break; 
       case '*':
        printf("multiplication is %lf"); 
               break; 
       case '/':
       if(number_2==0)
          {
            printf("math error");
            break;
          }
         else
         {
             result=number_1/number_2;
            printf("division is %lf",result);  
                break;
         }
   } 
 
     return 0;
}
