#include<stdio.h>
int main()
    {
        float meter, Cm, Km;
        printf("provide length in Cm ");
        scanf("%f",&Cm);
        meter= Cm / 100;
        Km= Cm / 1000;
        printf("length in meter = %f m\n",meter);
        printf("length in km = %f m\n",Km);
        return 0;
    }