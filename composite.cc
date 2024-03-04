#include<stdio.h>
int main()
{
    int i,n,c=2;
    for (i=1;i<=n;i++)
    {
        if(n%i==0)
        c=c+1;
        printf("%d\n",c);
    }
    if (c==2)
    printf ("%d is PRIME\n",c);
    else if(c==1)
    printf("%d is composite nor prime\n",c);
    else
    printf ("%d is COMPOSITE\n",c);
    return 0;
}
