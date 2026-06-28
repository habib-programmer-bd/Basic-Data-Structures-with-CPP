#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<int> d(n);
        for (int i = 0; i < n; i++)
        {
            d[i] = v[i];
        }

        sort(v.begin(), v.end());
        bool ans = false;
        for (int i = 0; i < n; i++)
        {
            if (v[i] != d[i])
            {
                ans = true;
            }
        }
        if (ans == true)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}