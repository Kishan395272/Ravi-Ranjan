//WAP to find the sum of n fractions.





#include<stdio.h>

struct frac
{
int n,d;   //n=numerator,d=denominator
};
struct frac input()
{ 
struct frac x;
printf("put values for numerator and denominator\n");
scanf("%d%d",&x.n,&x.d);
return x;
}
int i;
void input_n(int n,struct frac arr[50])
{
for(int i=0;i<n;i++);
 {
  arr[i]=input();
 }
}
int gcd(int p,int q)
{
int i,j;
j=1;
for(i=2;i<=p && i<=q;i++)
{
  if(p%i==0 && q%i==0)
   i=j;
}
return  j;
}
struct frac compute(struct frac p,struct frac q)
{
struct frac sum;
sum.n=(p.n*q.d)+(p.d*q.n);
sum.d=(p.d*q.d);
int Gcd=gcd(sum.n,sum.d);
sum.n=(sum.n/Gcd);
sum.d=(sum.d/Gcd);
return sum;
}
struct frac compute_n(int n,struct frac arr[50])
{
struct frac add;
add.n=0;
add.d=1;
for(int i=0;i<n;i++)
{
add=compute(add,arr[i]);
}
return add;
}

void display(int n,struct frac arr[50],struct frac sum)
{
for(int i=0;i<n;i++)
{
printf("%d / %d\n",arr[i].n,arr[i].d);
}
printf("%d/%d",sum.n,sum.d);
}
int main()
{
int n;

struct frac arr[50],sum;
printf("enter number of fraction you want to add\n");
scanf("%d",&n);
input_n(n,arr);
sum=compute_n(n,arr);
display(n,arr,sum);
return 0;
}




