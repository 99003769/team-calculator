  
#include<_SIMPLE_INTEREST.H>
#include<stdio.h>




  void simple_interest()
  {
    float principle_amount,time,ROI,simple_interest;
    printf("Enter the principle_amount: ");
    scanf("%f",&principle_amount);
    printf("Enter the time: ");
    scanf("%f",&time);
    printf("Enter the rate of interest: ");
    scanf("%f",&ROI);
    simple_interest = (principle_amount * time * ROI) / 100;
    printf("Simple Interest = %f", simple_interest);

}
