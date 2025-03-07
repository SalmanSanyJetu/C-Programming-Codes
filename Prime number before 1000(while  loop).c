#include<stdio.h>
void main()
{
    printf("The prime number from 1 to 100:\n");
    int i=2,x,cnt=0,sum;
    while( i<=100)
        {
            x=2;
            while(x*x<=i)
            {
                if(i%x==0)
                {
                    break;
                }
                x++;
            }

            if(x*x>i)
            {
                printf("%d  ",i);
                cnt=cnt+1;
            }
             i++;
             }
        printf("\ntotal prime number:%d",cnt);

}

