//Write a program to add two user input numbers using 4 functions.



#include<stdio.h>

int first_num()
{
int num;
printf("Enter first number");
scanf("%d",&num);
return num;
}
int second_num()
{
int num;
printf("Enter second number");
scanf("%d",&num);
return num;
}
int add_two_num(int first_num,int second_num)
{
return (first_num+second_num);
}
int print(int sum)
{
printf("The sum of two number is=%d\n",sum);
}
int main()
{
int x=first_num();
int y=second_num();
int sum=add_two_num(x,y);
print(sum);
return 0;
}
