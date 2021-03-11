#include "factorial.h"
#include "area.h"

int main()
{
    long result;
    int x,y,z,fact,num=5;
    find_factorial(num,&result);
    rect_area(5,6); // calling function rect_area
    square_area(5);
    triangle_area(5,6);
    return 0;
}
 
