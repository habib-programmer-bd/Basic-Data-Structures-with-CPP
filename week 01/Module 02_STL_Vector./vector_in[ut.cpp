#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    vector<int> v(x);
    for (int i = 0; i < x; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < x; i++)
    {
        cout << v[i] << " ";
    }

    int x;
    cin >> x;
    vector<int> v;
    for (int i = 0; i < x; i++)
    {
        int z;
        cin >> z;
        v.push_back(z);
    }
    for (int i = 0; i < x; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}