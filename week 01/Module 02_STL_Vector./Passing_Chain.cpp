#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a ,b;
        cin >> a >> b;
        int ans = 1;
        while (ans + b <= a)
        {
            ans = ans + b;
        }
        cout << ans << endl;
    }

    return 0;
}