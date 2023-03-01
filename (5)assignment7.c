#include<stdio.h>
int iscoprime(int n,int m)
{
    int max = n > m ? n : m;
    for(int i = 2; i < max; ++i)
    {
        if( n % i == 0 && m % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    printf("Enter two numbers to check those numbers are co-prime or not : ");
    int n,m;
    scanf("%d %d",&n,&m);
    if(iscoprime(n,m))
    {
        printf("\nThose numbers are co-prime.\n");
    }
    else
    {
        printf("\nThose numbers are not co-prime.\n");
    }
    return 0;
}
