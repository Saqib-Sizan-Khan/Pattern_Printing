#include<stdio.h>
int main()
{
    int i,j,n,k,spc=0;
    scanf("%d",&n);
    spc=n+4;

    for(i=1; i<=n; i++)
    {
        for(k=spc; k>=1; k--)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
            printf("* ");
        printf("\n");
        spc--;
    }
    spc=n+4;

    for(i=1; i<=n; i++)
    {
        for(k=spc; k>=1; k--)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
            printf("* ");
        printf("\n");
        spc--;
    }
    for(i=1; i<=n; i++)
    {
        for(k=spc; k>=1; k--)
        {
            printf(" ");
        }
        for(j=i; j<=n; j++)
            printf(" *");
        printf("\n");
        spc++;
    }
    return 0;
}
