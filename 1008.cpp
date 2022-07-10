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
        ll col, row;

        if (diff < sqr)
        {
            row = diff + 1;
            col = sqr;
        }
        else
        {
            col = n - (sqr - 1) * (sqr - 1);
            row = sqr;
        }
        if (sqr % 2 == 0)
        {
            swap(row, col);
        }

        cout << "Case " << ++count << ": " << row << " " << col << endl;
    }

    return 0;
}