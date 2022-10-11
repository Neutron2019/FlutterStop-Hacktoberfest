#include<stdio.h>
#include<math.h>
#include<time.h>
#define f(x) ((3*x)-cos(x)-1)
#define g(x) (3+sin(x))
#define h(x) (cos(x))
void main()
{
    time_t begin = time(NULL);
    float a=0.5,b=1.2,x0,x1=0.5,t,z;
    int i,k=0;
    printf("\nEnter The Value Of Weighting Factor: ");
    scanf("%f",&t);
    do
    {
        x0=x1;
        z=x0-((2*t*f(x0)*g(x0))/(2*g(x0)*g(x0)-f(x0)*h(x0)));
        x1=x0+4*(z-x0)*(f(x0)/(3*f(x0)-2*f(z)));
        k++;
    }while(fabs(x1-x0)>=0.0000001);  
    printf("\nThe Value Of The Root Of f(x): %f",x1);
    printf("\nThe Number Of Itertions: %d",k);
    time_t end = time(NULL);
    printf("\nThe execution time is %ld seconds", (end - begin));
}