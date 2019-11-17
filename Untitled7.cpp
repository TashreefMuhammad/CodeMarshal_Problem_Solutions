#include <stdio.h>

int main(void)
{
    long long t, cx, cy, r, px, py, i=0;
    scanf("%lld",&t);

    while(++i<=t)
    {
        scanf("%lld %lld %lld %lld %lld",&cx, &cy, &r, &px, &py);
        cx-=px;
        cy-=py;
        printf("Case %lld: ",i);
        if(cx*cx+cy*cy>=r*r)
            printf("no\n");
        else
            printf("yes\n");
    }

    return 0;
}
