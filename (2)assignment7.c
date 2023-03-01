#include<stdio.h>
void fib(int n)
{
    int x = 0,y = 1,sum = 0,count = 0;

    if( n == 0 || n == 1)
        printf("YES");
    while(1)
    {

        count++;
        sum=x+y;
        x = y;
        y = sum;
       if(sum == n)
       {
            printf("\nYES\n");
            break;
       }
        else if(count >= n && sum != n)
        {
            printf("\nNO\n");
            break;
        }

    }
}



int main()
{
   printf("Enter a number to check it is in fibonacci series or not : ");
   int n;
   scanf("%d",&n);
   fib(n);
   return 0;
}

