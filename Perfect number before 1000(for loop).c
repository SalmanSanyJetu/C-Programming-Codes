#include<stdio.h>
void main()
{
    printf("The perfect number from 1 to 100:\n");
    int i,x,sum,cnt=0;
    for(i=1; i<=100; i++)
        {
            sum=0;
            for(x=1;x<i;x++)
            {
                if(i%x==0)
                {
                    sum = sum + x;
                }

            }

            if(i==sum)
            {
                printf("%d  ",x);
                cnt=cnt+1;
            }

        }
        printf("\ntotal perfect number:%d",cnt);
}

