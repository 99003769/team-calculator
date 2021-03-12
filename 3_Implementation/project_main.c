#include "factorial.h"
#include "area.h"

int main()
{
    double radius;
    long result;
    int num1,num2;
    printf("enter length");
    scanf("%d",&num1);
    printf("enter breadth");
    scanf("%d",&num2);
    printf("Please enter the radius of the circle: ");
    scanf("%lf", &radius);
    find_factorial(num1,&result);
    area_circum(radius);
    rect_area(num1,num2);
    square_area(num1);
    triangle_area(num1,num2);
    return 0;
}
