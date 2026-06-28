#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        string v;
        string v1;
        cin >> v;
        cin >> v1;

        int x = 0;
        if (a > b)
        {
            x = b;
        }
        else
        {
            x = a;
        }
        for (int i = 0; i < x; i++)
        {
            if (v[i] != v1[i])
            {
                break;
            }
            else
            {
                cout << v[i];
            }
            
        }
        cout << endl;
    }

    return 0;
}