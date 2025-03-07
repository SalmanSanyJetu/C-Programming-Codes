#include<stdio.h>
void main()
{
  printf("press 0 to end\n");
  int i,x,pri=0,npri=0;
  float avg;
  while(1)
{
    printf("Input your integer:");
    scanf("%d", &x);
    i=2;
    if(x==1)
     {
         printf("1 is not eligible\n");
         pri--;
     }
    if(x>0)
    {
        while(i*i<=x)
            {
                if(x%i==0)
                {
                    npri=npri+1;
                    break;
                }
                i++;
            }

                if(i*i>x)
                {
                    pri=pri+1;

                }
    }
    if(x==0)
    {
        printf("\n\nTotal prime number: %d", pri);
        printf("\nTotal non prime number: %d", npri);
        break;
    }

}
}

