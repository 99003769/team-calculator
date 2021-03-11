#include<stdio.h>
int profit(int costprice, int sellingprice)
{
    return (sellingprice - costprice);
}
int loss(int costprice, int sellingprice)
{
    return (costprice - sellingprice);
}
