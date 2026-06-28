#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int x = 0;
    if (a <= b)
    {
        cout << "0" << endl;
    }
    else if (a > b)
    {
        x = a - b;
        cout << x << endl;
    }
    
    
    
    return 0;
}