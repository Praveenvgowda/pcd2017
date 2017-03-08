#include<stdio.h>
#include<math.h>
float computesin(float x) 
{
           float term,sum,prev,diff;
	   int i;
	   term=sum=diff=x;
	   for(i=3;diff>0.000001;i=i+2)
              {
		   prev=term;
		   term=(-term*x*x)/(i*(i-1));
		   diff=fabs(prev - term);
                   sum=sum+term;
	      }
           return sum;
}
float convertradians(float d)
{
	  float rad;
	  rad=(3.1412/180)*d;
	  return rad;
}
int main()
{
	  float degree,x,sum;
	  printf("enter the degree\n");
	  scanf("%f",&degree);
	  x=convertradians(degree);
	  sum=computesin(x);
	  printf("sin(%f) = %f\n",degree,sum);
	  return 0;
}
