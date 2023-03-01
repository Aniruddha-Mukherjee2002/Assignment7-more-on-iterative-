#include<stdio.h>
#define max 9999
void nextPrime(int n)
{
   int flag = 0;
   for(int i = n+1; i < max; i++)
   {

       for(int j = 2; j < i; j++)
       {
           if(i % j == 0)
            {
                flag = 1;
            }
       }
       if(flag == 0)
       {
           printf("Next prime number of %d is %d",n,i);
           break;
       }
       flag = 0;
   }
}
int main()
{
    printf("Enter a number : ");
    int n;
    scanf("%d",&n);
    nextPrime(n);
    return 0;
}
