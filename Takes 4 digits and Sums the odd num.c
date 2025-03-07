#include<stdio.h>
 void main()
 {
   int x,a,b,c,d,sum;
   printf("\n Enter your 4 digit num:");
   scanf("%d",&x);
   a=x/1000;
   b=(x-a*1000)/100;
   c=(x-(a*1000)-b*100)/10;
   d=(x-(a*1000)-(b*100)-(c*10));
   if(a%2!=0)
     {  sum=sum+a; }
   if(b%2!=0)
     {  sum=sum+b; }
   if(c%2!=0)
     {  sum=sum+c; }
   if(d%2!=0)
     {  sum=sum+d; }
 printf("\n The sum of the odd numbers is :%d",sum);
 printf("\n\n") ;
 }

