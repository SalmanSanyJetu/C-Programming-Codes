#include<stdio.h>
int fib(int a)
 {
  if(a==1)
    return 0;
  else if(a==2)
    return 1;
  else
    return (fib(a-1)+fib(a-2));
  }

int main()
{
    int i,n,a=1;
    printf("Enter the term:");
    scanf("%d", &i);
    while(a<=i)
    {   n=fib(a);
        printf("%d ",n);
        a++;
    }
    return 0;
}
