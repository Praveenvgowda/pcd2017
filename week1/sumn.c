#include<stdio.h>
int main()
{
int i,n;
int sum=0;
int a[100];
printf("enter the number of integers you want to add\n");
scanf("%d",&n);
printf("enter %d integers\n",n);
for(i=1;i<=n;i++);
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
printf("sum of entered integers=%d\n",sum);
return 0;
}


