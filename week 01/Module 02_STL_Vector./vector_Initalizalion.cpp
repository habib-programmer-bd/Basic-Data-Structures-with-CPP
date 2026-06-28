#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v; // type 01 // vactor ke call korlam,.....ar Time Complexity O(1);

    // vector<int> v(5); // type 02 // vactor call korar sate ,,,setar elements bole dilam....Time Complexity O(N);

    // vector<int> v(5, 0); // type 03 // vactor call korar somay ..(elements),(value).....Initalizalion koer dilam....Time Complexity O(N);

    // vector<int> v2(v); // type 04 // v2 akta new vector call koelam..tar modde ami (v) ar sob value reke dilam..

    // akta array ar value vector a arkte hole..
    // {
    //     int x[5] = {1, 5, 7, 6, 3};
    //     vector<int> v(x, x + 5);
    //     for (int i = 0; i < v.size(); i++)
    //     {
    //         cout << v[i] << endl;
    //     }
    // }

    // cout << v.max_size() << endl;

    return 0;
}