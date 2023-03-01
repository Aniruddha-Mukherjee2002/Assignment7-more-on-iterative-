#include<stdio.h>
void armstrong(int n)
{
    int mod, sum = 0;
    int t = n;
    while(t != 0)
    {
        mod = t % 10;
        sum +=(mod*mod*mod);
        t/=10;
    }
    if(sum == n)
        printf("It is an armstrong number\n");
    else
        printf("It is not an armstrong number\n");
}
int main()
{
    printf("Enter a number : ");
    int n;
    scanf("%d",&n);
    armstrong(n);
    return 0;
}
