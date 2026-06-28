#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int mid = n / 2;

    for (int i = 1; i <= n; i++)
    {
        if (i == mid + 1)
        {
            for (int j = 1; j <= mid; j++)
            {

                cout << " ";
            }
            cout << "X";
        }
        else if (i <= mid)
        {
            for (int j = 1; j <= i - 1; j++)
            {
                cout << " ";
            }
            cout << "\\";
            for (int j = 1; j <= n - 2 * i; j++)
            {
                cout << " ";
            }
            
            cout << "/";
        }
        else
        {
            int k = n - i + 1;
            for (int j = 1; j <= k - 1; j++)
            {
                cout << " ";
            }
            cout << "/";
            for (int j = 1; j <= n - 2 * k; j++)
            {
                cout << " ";
            }
            cout << "\\";
        }
        cout << endl;
    }

    return 0;
}