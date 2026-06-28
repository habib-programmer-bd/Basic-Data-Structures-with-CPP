#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n_one;
    cin >> n_one;
    vector<int> arr_one(n_one);
    for (int i = 0; i < n_one; i++)
    {
        cin >> arr_one[i];
    }
    int n_tow;
    cin >> n_tow;
    vector<int> arr_two(n_tow);
    for (int i = 0; i < n_tow; i++)
    {
        cin >> arr_two[i];
    }

    int arr_three_size = n_one + n_tow;
    vector<int> arr_three(arr_three_size);

    for (int i = 0; i < n_one; i++)
    {
        arr_three[i] = arr_one[i];
    }
    for (int i = n_one, j = 0; i < arr_three_size; i++, j++)
    {
        arr_three[i] = arr_two[j];
    }

    sort(arr_three.begin(), arr_three.end());

    for (int i = 0; i < arr_three_size; i++)
    {
        if (arr_three[i] == arr_three[i + 1])
        {
            cout << arr_three[i] << " ";
            i++;
        }
        else
        {
            cout << arr_three[i] << " ";
        }
    }

    return 0;
}