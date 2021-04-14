//WAP to find the #include<stdio.h>

struct fract
{
int n; //n(numerator)
int d;//d(denominator)
};
typedef struct fract fract;
fract input()
{
fract x;
scanf("%d",&x.n);
scanf("%d",&x.d);
return x;
}
 int gcd(int p,int q)
{
int i,j;
for(i=1;i<=p && i<q;i++)
{
if(p%i==0 && q%i==0)
j=i;
}
return j;
}
fract cal_sum(fract x1,fract x2)
{
fract f;
int Gcd;
f.n=(x1.n*x2.d)+(x2.n*x1.d);
f.d=(x1.d*x2.d);
Gcd=gcd(f.n,f.d);
f.n=(f.n/Gcd);
f.d=(f.d/Gcd);
return f;
}

void output(fract x1,fract x2,fract result)
{
printf("The sum of %d%d and %d%d is %d / %d",x1.n,x2.d,x1.d,x2.n, result.n,result.d);
printf("\n");
}
int  main()
{
fract x1,x2,result;
printf("Enter first fraction");
x1=input();
printf("Enter second fraction");
x2=input();
result=cal_sum(x1,x2);
output(x1,x2,result);
return 0;
}











