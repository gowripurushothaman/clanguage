#include<conio.n>
#include<stdio.h>
int main()
{
int i,a,sum=0;
printf("enter the value");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
sum=sum+i;
}
printf("sum of natural number is %d",sum);
return 0;
}
