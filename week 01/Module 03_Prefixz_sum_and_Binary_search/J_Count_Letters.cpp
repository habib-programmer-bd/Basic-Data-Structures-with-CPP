#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int size = s.size();
    vector<string> abc(size);
    for (int i = 0; i < size; i++)
    {
        abc[i] = s[i];
    }

    // int c = 0;
    vector<int> ans(size);
    for (int i = 0; i < size; i++)
    {
        if (abc[i] == "a")
        {
            ans[i] = 1;
        }
    }
    // cout << c;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << abc[i];
    // }

    return 0;
}