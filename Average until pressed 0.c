#include<stdio.h>
void main()
{
  int x,sum=0,cnt=0;
  float avg;
  while(1)
{
    printf("Input your integer:");
    scanf("%d", &x);

      if(x!=0)
      {
          cnt++;
          sum = sum + x;

      }

      else
        break;
 }
   avg= (float)sum/cnt;
   printf("\nAverage numbers: %f\n", avg);

}
