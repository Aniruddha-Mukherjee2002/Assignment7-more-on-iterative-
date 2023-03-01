#include<stdio.h>
void armstrong(int n)
{
    int mod, sum = 0;
    printf("\nAll armstrong numbers under %d :\n",n);
    printf("______________________________\n",n);
    for(int i = 1; i <= n; ++i)
    {
        int t = i;
        while(t != 0)
        {
            mod = t%10;
            sum+=(mod*mod*mod);
            t/=10;
        }
    if(i==sum)printf("%d is an armstrong number\n",i);
    sum = 0;
    }
}
int main()
{
    printf("Enter a number : ");
    int n;
    scanf("%d",&n);
    armstrong(n);
    return 0;
}

