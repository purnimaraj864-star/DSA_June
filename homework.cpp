#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
    void insert_at_start(Node *&head)
    {
        int value;
        cout << "Enter a value to insert at beginning ";
        cin >> value;
        Node *add = new Node(value);
        add->next = head;
        head = add;
    }

    void insert_at_x(Node *&head)
    {
        int value;
        cout << "Enter a value to insert at x position ";
        cin >> value;
        int place;
        cout << "Where do you want to insert ";
        cin >> place;
        int count = 1;
        Node *add = new Node(value);
        Node *temp = head;
        while (temp->next != NULL)
        {
            count = count + 1;
            if (count == (place))
            {
                add->next = temp->next;
                temp->next = add;
                break;
            }
            temp = temp->next;
        }
    }

    void insert_at_end(Node *&head)
    {
        int value;
        cout << "Enter a value to insert at end ";
        cin >> value;
        Node *add = new Node(value);

        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = add;
    }

    void searching(Node *&head)
    {
        int value;
        cout << "Enter a value to find ";
        cin >> value;
        string flag = "false";
        int count = 1;
        Node *temp = head;
        while (temp != NULL)
        {
            if (temp->data == (value))
            {
                flag = "true";
                cout << flag << " at position " << count << endl;
                break;
            }
            temp = temp->next;
            count = count + 1;
        }
        if (flag == "false")
        {
            cout << "Not found";
        }
    }
    void delete_at_beginning(Node *&head)
    {
        head = head->next;
    }

    void delete_at_x(Node *&head)
    {
        int position;
        cout << "Enter the position you want to delete ";
        cin >> position;
        int count = 1;
        Node *temp = head;
        while (temp->next != NULL)
        {
            if (count == (position - 1))
            {
                temp->next = temp->next->next;
                break;
            }
            temp = temp->next;
            count = count + 1;
        }
    }
    void delete_at_end(Node *&head)
    {
        Node *temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = NULL;
    }
};
int main()
{
    // create linked list manually
    Node *head;
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);
    head = first;
    head->next = second;
    head->next->next = third;
    head->next->next->next = fourth;
    head->next->next->next->next = fifth;

    head->insert_at_start(head);
    head->insert_at_x(head);
    head->insert_at_end(head);
    head->searching(head);

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl
         << "Now after deletion at beginning, deletion at position x, deletion at end" << endl;

    head->delete_at_beginning(head);
    head->delete_at_x(head);
    head->delete_at_end(head);

    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}