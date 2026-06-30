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

void insert_at_tell(Node *&head, Node *&tell, int value)
{
    Node *newnode = new Node(value);

    Node *tmp = tell;

    tell->next = newnode;
    tell = newnode;
}
void print_link_list(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    cout << count;
}
int main()
{
    Node *head = new Node(1);
    Node *tell = new Node(1);

    head->next = tell;

    insert_at_tell(head, tell, 2);
    insert_at_tell(head, tell, 1);
    insert_at_tell(head, tell, 5);
    insert_at_tell(head, tell, 4);
    insert_at_tell(head, tell, 4);

    print_link_list(head);

    return 0;
}