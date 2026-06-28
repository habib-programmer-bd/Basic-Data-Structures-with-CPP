#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    cin.ignore();
    vector<string> v(x);
    for (int i = 0; i < x; i++)
    {
        getline(cin,v[i]);
    }
    for (string x : v)
    {
        cout << x << endl;
    }

    return 0;
}