#include<conio.h>
#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the numbers:");
scanf("%d %d %d",&a,&b,&c);
if(a>=b && a>=c)
printf("%d is the largest number",a);
else (b>=a && b>=c)
printf("%d is the largest number",b);
else if (c>=a && c>=b)
printf("%d is the largest number",c);
return 0;
}
