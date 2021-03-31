//WAP to find the distance between two point using 4 functions.






#include<stdio.h>
#include<math.h>
int main()
{
float x1,x2,y1,y2,d
printf("Enter the x coordinate of point 1");
scanf("%f",&x1);
printf("Enter the y coordinate of point 1");
scanf("%f",&y1);
printf("Enter the x coordinate of point 2");
scanf("%f",&x2);
printf("Enter the y coordinate of point 2");
scanf("%f",&y2);
x=(x2-x1);
y=(y2-y1);
distance=sqrt(x*x+y*Y);
printf("distance=%f",distance);
return 0;
}
