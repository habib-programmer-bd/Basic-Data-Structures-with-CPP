#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    vector<int> v(x);
    vector<int> v2(x);
    // for (int i = 0; i < x; i++)
    // {
    for (int i = 0; i < x; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < x; i++)
    {
        cin >> v2[i];
    }
    // }
    for (int x : v2)
    {
        cout << x << " ";
    }

    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}