#include<stdio.h>
int main()
{
    float principal,time,rate;
    double interest;
    printf("enter principal:");
    scanf("%f",&principal);
    printf("enter time:");
    scanf("%f",&time);
    printf("enter rate:");
    scanf("%f",&rate);
    interest=((principal*time*rate)/100);
    printf("%lf is the interest",interest);

}