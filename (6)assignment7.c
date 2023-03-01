#include<stdio.h>
void prime(int n)
{
     int flag = 1;
    for(int i = 1; i <= n; ++i)
    {
        flag = 1;
        for(int j = 2; j < i; j++)
        {
            if( i % j == 0)
                flag = 0;
        }
        if(flag != 0)
        printf("%d ",i);
    }
}
int main()
{
    printf("Enter a number : ");
    int n;
    scanf("%d",&n);
    prime(n);
    return 0;
}
