#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    // int ans = 0;
    // int index = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     ans = ans + v[i];
    //     if (ans == -1)
    //     {
    //         index = i + 1;
    //         break;
    //     }
    // }
    // int ans2 = 0;
    // for (int i = index +1; i < n; i++)
    // {
    //     ans2 = ans2 + v[i];
    //     if (ans2 == -1)
    //     {
    //         break;
    //     }

    // }
    bool x = false;
    for (int i = 0; i < n; i++)
    {
        if (v[i] != 0)
        {
            // break;
        }
        else
        {
            x = true;
        }
    }
    bool d = false;
    if (x == true)
    {
        cout << "0";
        d = true;
    }

    bool ans = false;
    int index = 0;
    int sum_right = 0;
    int sum_left = 0;
    if (d == false)
    {
        for (int i = 0, j = n - 1; i < n, j >= 0; i++, j--)
        {

            sum_right = sum_right + v[i];
            sum_left = sum_left + v[j];
            while (i < j)
            {
                if (sum_right == sum_left)
                {
                    index = i + 2;
                    ans = true;
                    break;
                }
            }
        }
        if (ans == true)
        {
            cout << index;
        }
        else
        {
            cout << "-1";
        }
        // cout << index;
    }

    return 0;
}