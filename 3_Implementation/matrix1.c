#include<stdio.h>
int main()
{
int Num1,Num2,rows,columns;
printf("Enter number of rows\n");
scanf("%d",&rows);
printf("Enter number of columns\n");
scanf("%d",&columns);
int a1[rows][columns],a2[rows][columns],add[rows][columns];
printf("Enter Matrix 1\n");
for(Num1=0;Num1<rows;Num1++)
{
for(Num2=0;Num2<columns;Num2++)
{
scanf("%d",&a1[Num1][Num2]);
}
}
printf("Enter Matrix 2\n");
for(Num1=0;Num1<rows;Num1++)
{
for(Num2=0;Num2<columns;Num2++)
{
    add[Num1][Num2]=a1[Num1][Num2]+a2[Num1][Num2];
}
}
printf("Addition of above matrices is\n");
for(Num1=0;Num1<rows;Num1++)
{
for(Num2=0;Num2<columns;Num2++)
{
printf("%d\t",add[Num1][Num2]);
}
printf("\n");
}
return 0;
}