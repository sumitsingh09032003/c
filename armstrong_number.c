#include<math.h>
#include<stdio.h>
int main()
{
 int num, n = 0, reminder, result = 0;
 printf("Enter a number : ");
 scanf("%d", &num);
 
 for(int i=num;i!=0;n++)
 {
 i/=10;
 }
 
 for(int i=num;i!=0;i/=10)
 {
 reminder = i%10;
 
 result = result+pow(reminder,n);
 }
 
 if(result==num)
 {
 printf("%d is a armstrong number",num);
 }
 else{
 printf("%d not a armstrong number",num);
 }
 
 return 0;
 
}
