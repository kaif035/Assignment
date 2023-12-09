#include<stdio.h>
void main()
{
int i,fl,nl;
for(i=999;i>=100;i--)
{
int num=i;
int d1,d2,d3;
d1=num%10;
num=num/10;
d2=num%10;
num=num/10;
d3=num%10;
if((d1-d2)==1||(d2-d1)==1)
{
if((d2-d3)==1||(d3-d2)==1)
{
fl=i;
break;
}
}
}
printf("The largest three digit Jumping number is=%d",fl);
}
