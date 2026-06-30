#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};
int main()
{
    Node *head = new Node(10);
    Node *habib = new Node(20);
    Node *hacib = new Node(30);
    Node *mahira = new Node(40);

    head->next = habib;
    habib->next = hacib;
    hacib->next = mahira;



    Node * tmp = head;

    while (tmp != NULL)
    {
        cout << tmp->value << endl;
        tmp = tmp->next;
    }
    
    return 0;
}