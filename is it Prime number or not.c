#include<stdio.h>
void main()
{
    int x,i,sum=0;
    printf("Enter your integer:");
    scanf("%d", &i);
    x=1;
    while(x<i)
            {
                if(i%x==0)
                {
                    sum=sum+x;
                }
                else
                    break;
                x++;
            }

                if(i==sum)
                    printf("\n%d is a perfect number", i);
                else
                    printf("\n%d is not a perfect number", i);



        }


