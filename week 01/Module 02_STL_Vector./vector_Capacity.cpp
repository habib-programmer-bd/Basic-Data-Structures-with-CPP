#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v;
    // cout << v.capacity() << endl;

    vector<int> v;
    v.push_back(100);
    v.push_back(200);
    v.push_back(300);

    cout << v.size() << endl;

    v.clear();
    cout << v.size() << endl;
    cout << v[0] << endl;

    // cout << v[1] << endl;

    return 0;
}