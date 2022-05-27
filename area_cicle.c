#include<stdio.h>
int rectangle(int a,int b);
int square(int x);
float circle(int r);
int main()
{
 int a,b,x,r;
 printf("Enter the one side of the rectangle : ");
 scanf("%d", &a);
 printf("Enter the enother side of the rectangle : ");
 scanf("%d", &b);
 printf("Enter the side of the square : ");
 scanf("%d", &x);
 printf("Enter the redius of the circle : ");
 scanf("%d", &r);
 
 int A1 = rectangle(a,b);
 printf("Area of the rectangle : %d \n",A1);
 
 int A2 = square(x);
 printf("Area of the square : %d \n",A2);
 
 float A3 = circle(r);
 printf("Area of the circle : %f \n",A3);
 
 
 return 0;
}
int rectangle(int a,int b)
{
 return a*b;
}
float circle(int r){
 return 3.14*r*r;
}
int square(int x)
{
 return x*x;
}
