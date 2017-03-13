#include<stdio.h>
#include<math.h>
int rev(int n)
{
       int a=0,x;
       while(n!=0)
       {
            int x = n%10;
            a = (a*10)+x;
            n=n/10;
       }     
       return a;
}
int main()
{
int n;
printf("enter the number to be reversed\n");
scanf("%d",&n);
int d = rev(n);
printf("the reverse of the number is %d\n",d);
if (d==n)
{
printf("the given number is a palindrome\n");
}
else {
printf("it is not a palindrome\n");
     }
return 0;
}
