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

void insert_at_ay_position(Node *&head, int index, int value)
{
    Node *newnode = new Node(value);
    Node *tmp = head;
    for (int i = 1; i < index; i++)
    {
        tmp = tmp->next;
    }

    newnode->next = tmp->next;
    tmp->next = newnode;
}
void print_link_list(Node *head)
{
    Node *tmp = head;

    while (tmp != NULL)
    {
        cout << tmp->value << endl;
        tmp = tmp->next;
    }
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(30);
    Node *b = new Node(40);

    head->next = a;
    a->next = b;

    insert_at_ay_position(head, 2, 500);
    insert_at_ay_position(head, 2, 7000);

    print_link_list(head);
    return 0;
}