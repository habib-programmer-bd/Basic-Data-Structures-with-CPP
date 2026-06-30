//
#include <bits/stdc++.h>
using namespace std;
void fun(int *v)
{
    v = NULL;
}
int main()
{
    int x = 10;
    int *v = &x;
    fun(v);
    cout << *v;
    return 0;
}