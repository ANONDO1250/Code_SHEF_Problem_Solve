#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    while (n--)
    {
        int x, y;
        cin >> x >> y;

        if (x * 15 >= y * 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}