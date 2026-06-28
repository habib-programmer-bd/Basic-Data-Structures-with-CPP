#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, l, r;
        cin >> n >> l >> r;
        int arr[1001];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int ans1 = 0;
        int ans2 = 0;
        for (int i = 0; i < l -1; i++)
        {

            ans1 = ans1 + arr[i];
        }
        for (int i = r; i < n; i++)
        {
            ans2 = ans2 + arr[i];
        }
        if (ans1 > ans2)
        {
            cout << ans1 << endl;
        }
        else
        {
            cout << ans2 << endl;
        }
    }

    return 0;
}