#include<stdio.h>
int main()
{
    float input_temperature;
    double result;
    char input;
    printf("enter celsius or fahrenheit value c or f: ");
    scanf("%c",&input);

switch (input)
{

case 'c':
    printf("enter celsius value:");
    scanf("%f",&input_temperature);
    result=(input_temperature *1.8) +32;
    printf("fahrenheit is %lf",result);
    break;

case 'f':
    printf("enter fahrenheit value:");
    scanf("%f",&input_temperature);
    result=(input_temperature - 32) * 0.55556;
    printf("celsius is %lf",result);
    break;
}
         return 0;
}