//WAP to find the sum of n fractions.

#include<stdio.h>
int main()
{
float a,b,c,d,w,x,z;
printf("Put the value of 1st numerator:\n");
scanf("%f",&a);
printf("put the value of 2nd numerator:\n");
scanf("%f",&b);
printf("Put the value of 1st denominator:\n");
scanf("%f",&c);
printf("put the value of 2nd denominator:\n");
scanf("%f",&d);

//To add two number
 
w=(a*d)+ (c*b);
x=(c*d);
z=w/x;

printf("the value of z will be %f\n",z);
return 0;
}



