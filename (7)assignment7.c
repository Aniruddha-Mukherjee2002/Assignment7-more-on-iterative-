#include<stdio.h>
void prime(int n,int m)
{
     int flag = 1;
    for(int i =n; i <= m; ++i)
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
    printf("Enter two numbers : ");
    int n,m;
    scanf("%d %d",&n,&m);
    prime(n,m);
    return 0;
}

