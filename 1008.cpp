#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t, n, count = 0;
    cin >> t;

    while (t--)
    {
        cin >> n;
        ll sqr = ceil(sqrt(n));
        ll diff = sqr * sqr - n;
        ll x, y;

        if (diff < sqr)
        {
            y = diff + 1;
            x = sqr;
        }
        else
        {
            x = 2 * sqr - diff - 1;
            y = sqr;
        }
        if (sqr & 1)
        {
            swap(x, y);
        }

        cout << "Case " << ++count << ": " << x << " " << y << endl;
    }

    return 0;
}