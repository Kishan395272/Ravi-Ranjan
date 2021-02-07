//Write a program to find the volume of a tromboloid using one function

#include<stdio.h>
int main()
{
//3 parameters given that is h,b,d
float  h,b,d,vol;
printf("Enter the value of height,breadth,depth:");
scanf("%f","%f","%f",&h,&b,&d);

//using tromboloid formulae volume will be 

vol=((h*d)+d)/(3*b);
printf("volume of tromboloid will be %f",h,b,d,vol);
return 0;
}
