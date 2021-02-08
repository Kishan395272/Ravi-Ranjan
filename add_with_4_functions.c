//Write a program to add two user input numbers using 4 functions.




#include<stdio.h>
#include<math.h>
int first num()
{
int num;
//for taking user input of first number

printf("Enter the value first number");
scanf("%d",&num);
return num;
}
Int second num()
{
Int num;
//for taking user input of second number

printf("Enter the value of second number");
scanf("%d",&num);

return num;
}
Int add two num(int first num,int second num)
{
return (first num+second num);
}
Int print(int sum);
{
printf("The sum of two number will be "%d\n",sum);
}
Int main()
{
Int a=first num();
Int b=second num();
Int sum=add two num(a,b);
print(sum);
return 0;
}

