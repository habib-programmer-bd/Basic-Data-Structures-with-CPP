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
    int count = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int ans = v[i];
        ans = ans + 1;
        if (ans == v[i])
        {
            count++;
        }
    }

    cout << count;
    return 0;
}