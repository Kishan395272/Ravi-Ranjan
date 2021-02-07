//WAP to find the distance between two points using structures and 4 functions.

#include<stdio.h>
#include<math.h>
int main()
{
int x1,x2,y1,y2,x,y,distance;

//Initial and final points we take to find distance between them

printf("Enter initial points for both coordinates:");
scanf("%d%d",&x1,&y1);

printf("Enter final points for both coordinates:");
scanf("%d%d",&x2,&y2);

x=(x2-x1);
y=(y2-y1);
 distance= sqrt(x*x + y*y);

printf("Distance between two points is %d",distance);
return 0;
}



