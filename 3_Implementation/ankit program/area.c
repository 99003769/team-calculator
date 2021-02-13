#include<stdio.h>
int main ()
{
    float Breadth, length, base, height, area; 
    int choice;
    printf("1. For Area of square\n 2.For area of triangle\n 3.For area of rectangle\n");
    printf("Enter your choice");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1 :
            printf("for triangle enter base and height\n");
            scanf("%f %f",&base, &height);
            area=0.5*base*height;
            printf("area of triangle is %f",area);
            break;
        case 2 :
            printf("for square enter side value\n");
            scanf("%f",&length);
            area= length*length;
            printf("area of square is\t %f\n",area);
            break;
        case 3 :
            printf("for rectangle enter Length and Breadth\n");
            scanf("%f%f",&length, &Breadth);
            area= length*Breadth;
            printf("area of rectangle is\t %f\n",area);
            break;
        default:
            printf("invalid choice");
            break;
    }
    return 0;
}