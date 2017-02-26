#include <stdio.h>

int add (int n,int a[])
{
int i;
int sum =0;
for (i=0;i<n;i=i+1)
{
sum = sum + a[i];
}
return sum;
}
 int main() { int a[10],n,tot,i; printf("enter the number of numbers \n");
scanf("%d",&n);
for (i=0;i<n;i=i+1)
{
printf("ënter numbers\n");
scanf("%d",&a[i]);
}
tot = add(n,a);
printf("total is %d\n",tot);
return 0;
}
