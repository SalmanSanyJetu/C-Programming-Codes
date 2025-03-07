#include<stdio.h>
 void main()
 {
  float kg,m,bmi;
  printf("\n Enter your Weight in kg:");
  scanf("%f",&kg);
  printf("\n Enter your Height in meter:");
  scanf("%f",&m);
  bmi=kg/(m*m);
  printf("\nYour BMI is :%f",bmi);
  if(bmi<=18.5)
   {   printf("\n You are Underweight");   }
 else if(bmi>=18.6 && bmi<=24.9 )
   {   printf("\n You are Normal");            }
 else if(bmi>=25 && bmi<=29.9 )
  { printf("\n You are Overweight");               }
 else
  { printf("\n You are Obese");                }
printf("\n\n") ;
 }

