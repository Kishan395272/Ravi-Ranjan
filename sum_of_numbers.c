//Write a program to find the sum of n different numbers using 4 functions

#include<stdio.h>
int main()
{
int n,sum=0,i,value;
printf("Enter the number  user want to add:\n");
scanf("%d",&n);
printf("Enter %d numbers\n",n);
for (i=1;i<=n;i++)
{
scanf("%d",&value);
sum=sum+value;
}
printf("sum of entered number is %d",sum);
return 0;
}
