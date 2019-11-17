// Solution in C
#include <stdio.h>

int main(void)
{
    int X, Y, Z, res;
    scanf("%d %d %d",&X, &Y, &Z);
    //calculate res by writing your code here.
    res = X + Y - Z;
    printf ("%d\n", res);
    return 0;
}

// Solution in C++
#include <iostream>

using namespace std;

int main(void)
{
    int X, Y, Z, res;
    cin >> X >> Y >> Z;
    //calculate res by writing your code here.
    res = X + Y - Z;
    cout << res << "\n";
    return 0;
}
