#include <iostream>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        n <= 10 ? cout << 0 << " " << n << endl : cout << 10 << " " << n - 10 << endl;
    }

    return 0;
}