#include<SQRT_OPERATOR.H>
#include<stdio.h>
#include<math.h>



  void sqrt_operator()
  {
      double n1,square_root;

   printf("Enter a number: ");
   scanf("%lf", &n1);
   square_root = sqrt(n1);
   printf("Square root of %.2f =  %.2f", n1, square_root);

  }

