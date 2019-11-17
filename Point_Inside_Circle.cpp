// Solution in C
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

// Solution in C++
#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long t, cx, cy, r, px, py, i=0;
    cin >> t;

    while(++i<=t)
    {
        cin >> cx >> cy >> r >> px >> py;
        cx-=px;
        cy-=py;
        cout << "Case " << i << ": ";
        if(cx*cx+cy*cy>=r*r)
            cout << "no\n";
        else
            cout << "yes\n";
    }

    return 0;
}
