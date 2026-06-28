#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    // constor call...........
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};
int main()
{
    Node a(10), b(50), c(60);

    // Link kore daya..
    a.next = &b;
    b.next = &c;

    cout << a.value << endl;
    cout << a.next->value << endl;
    cout << a.next->next->value << endl;

    return 0;
}