//Write a program to find the sum of n different numbers using 4 functions

#include<stdio.h>
int main()
{
// for finding sum of different numbers we will take 4 values that is
int i,sum=0,n,value;
printf("Enter the number user want to add:\n");
scanf("%d",&n);
printf("Enter %d numbers\n",n);
for(i=1;i<=n;i++)
{
scanf("%d",&value);
sum=sum+value;
}
printf("total sum of entered number is %d",sum);
return 0;
}
