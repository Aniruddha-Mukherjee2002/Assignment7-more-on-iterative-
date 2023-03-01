#include<stdio.h>
void fib(int n)
{
    int x = 0,y = 1,sum = 0;

    for(int i = 1; i < n; ++i)
    {
        sum=x+y;
        x = y;
        y = sum;

    }

    printf("%d ",sum);

}
int main()
{
    fib(3);
    return 0;
}
