#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    {
        // v = assign();
        vector<int> v = {1, 2, 4, 3, 8};
        vector<int> v2;
        v2 = v;

        for (int x : v2)
        {
            cout << x << " ";
        }
    }
    cout << endl;
    {
        // v.push_back();
        vector<int> v = {1, 2, 4, 3, 8};
        v.push_back(400);
        for (int x : v)
        {
            cout << x << " ";
        }
    }
    cout << endl;
    {
        // v.insert();
        vector<int> v = {1, 3, 4, 5, 7};
        vector<int> v2 = {100, 300, 400};
        // v.insert(v.begin() + 2, 100);
        v.insert(v.begin() + 1, v2.begin(), v2.end());
        for (int x : v)
        {
            cout << x << " ";
        }
    }
    cout << endl;
    {
        // v.begin();
        vector<int> v = {1, 4, 5, 4, 6, 9, 4, 31, 3, 1};
        v.erase(v.begin() + 2, v.begin() + 5);
        for (int x : v)
        {
            cout << x << " ";
        }
    }
    cout << endl;
    {
        // replace();
        vector<int> v = {1, 4, 5, 4, 6, 9, 4, 31, 4, 1};
        replace(v.begin(), v.end() - 2, 4, 100);
        for (int x : v)
        {
            cout << x << " ";
        }
    }
    cout << endl;
    {
        vector<int> v = {1, 4, 5, 4, 6, 9, 4, 31, 4, 1};
        auto it = find(v.begin() +3, v.end() - 3, 100);
        if (it == v.end())
        {
            cout << "NOT FOUND";
        }
        else
        {
            cout << "FOUND";
        }
    }
    return 0;
}