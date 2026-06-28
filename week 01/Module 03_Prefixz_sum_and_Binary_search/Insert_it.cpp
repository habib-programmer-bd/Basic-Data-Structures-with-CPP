#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    vector<int> v(a);
    for (int i = 0; i < a; i++)
    {
        cin >> v[i];
    }
    int b;
    cin >> b;
    vector<int> v1(b);
    for (int i = 0; i < b; i++)
    {
        cin >> v1[i];
    }
    int t;
    cin >> t;

    vector<int> ans(a + b);
    for (int i = 0; i < a; i++)
    {
        ans[i] = v[i];
    }

    ans.insert(ans.begin() + t, v1.begin(), v1.end());
    for (int i = 0; i < a + b; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}