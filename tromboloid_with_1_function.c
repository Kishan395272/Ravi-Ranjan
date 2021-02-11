//Write a program to find the volume of a tromboloid using one function








#include<stdio.h> 
#include<math.h>
int main()
{
//3 things already  given that is h(height),b(breadth),d(depth)

float  h,b,d,volume;

printf("put value of h,b,d:\n");
scanf("%f%f%f",&h,&b,&d);

//using tromboloid formulae volume will be 

volume=((h*d)+d)/(3*b);

printf("the volume of tromboloid will be %f",volume);
return 0;
}

