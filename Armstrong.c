#include<studio.h>
void main()
{
int n;
int r=0,temp;
printf("enter a no.");
scanf("%d",&n);
temp=n;
while(n!=0)
{
temp=temp/10;
r=r+temp^3;
temp/=10;
}
if(n==r)
{
printf("Armstrong");
}
else
{
printf("Not an Armstrong");
}}
