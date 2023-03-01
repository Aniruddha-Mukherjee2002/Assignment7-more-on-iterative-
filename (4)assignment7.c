#include<stdio.h>
void hcf(int n,int m)
{
    int temp = n > m ? n : m;
    int t = 0;
    for(int i = 2; i < temp; ++i)
    {
        if(n % i == 0 && m % i == 0)
        {
            t = i;
        }
    }
    if(t!=0)printf("HCF of %d and %d is %d",n,m,t);
    else printf("HCF of %d and %d is %d",n,m,1);
}
int main()
{
    printf("Enter two numbers to calculate HCF : ");
    int n,m;
    scanf("%d %d",&n,&m);
    hcf(n,m);
    return 0;
}
