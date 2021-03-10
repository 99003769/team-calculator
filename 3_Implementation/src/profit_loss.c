#include<stdio.h>
int profit(int costprice, int sellingprice)
{
    return (sellingprice - costprice);
}
int loss(int costprice, int sellingprice)
{
    return (costprice - sellingprice);
}
int main()
{
    int costprice = 1500, sellingprice =2000;
    if (sellingprice == costprice)
    printf("no prfit no loss\n");
    else if(sellingprice > costprice)
    printf("%d profit\n", profit(costprice, sellingprice));
    else
    printf("%d loss\n", loss(costprice, sellingprice));
    return 0;
    }