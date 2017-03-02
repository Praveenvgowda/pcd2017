#include<stdio.h>
struct complex
{
      float real;
      float img;
};
struct complex addcomplex (int n,struct complex a[n]) 
{
struct complex c;
c.real = 0;
c.img = 0;
for (int i=0;i<n;i++){
c.real = c.real + a[i].real;
c.img = c.img + a[i].img;
}
return c;}
int main()
{
struct complex a[10],c;
int n;
printf("enter number of complex number to be added\n");
scanf("%d",&n);
for (int i=0;i<n;i++)
{
printf("enter real and imaginary part of complex number");
scanf("%d%d",&a[i].real,&a[i].img);
}
c = add(a,n);
printf("sum is = %d + i%d",c.real,c.img);
return o;
}
