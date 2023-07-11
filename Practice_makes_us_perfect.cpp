#include <bits/stdc++.h>
using namespace std;

int main()
{
    int numbers[4];

    for (int i = 0; i < 4; ++i)
    {
        cin >> numbers[i];
    }

    int count = 0;
    for (int i = 0; i < 4; i++)
    {
        if (numbers[i] >= 10)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}