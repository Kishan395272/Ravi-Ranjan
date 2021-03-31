//WAP to find the distance between two points using structures and 4 functions.





#include<math.h>
#include<stdio.h>
struct distance
{

float x,y;
};
 
float distance(struct distance p,struct distance q)
    

{
float w;
w=sqrt(((p.x-q.x)*(p.x-q.x))+((p.y-q.y)*(p.y-q.y)));
return w;
 int main()
{
float result;
struct distance p,q;
printf("Enter the x cordinate of point p:");
scanf("%f",&p.x);
printf("Enter the x cordinate of point q:");
scanf("%f",&q.x);
printf("Enter the y cordinate of point p:");
scanf("%f",&p.y);
printf("Enter the y cordinate of point q:");
scanf("%f",&q.y);
result=distance(p,q);
printf("the distance between 2 point is =%f",result);
return 0;
}



