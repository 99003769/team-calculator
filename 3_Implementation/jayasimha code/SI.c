
#include <stdio.h>
int main()
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
    return 0
}
