#include <iostream>

using namespace std;

class node
{
public:
    int data;
    node *next;
};

class circleList

{
public:
    node *head;
    node *tail;
    circleList()
    {
        head = NULL;
        tail = NULL;
    }

    void insert(int data)
    {
        node *temp = new node();
        temp->data = data;
        if (head == NULL)
        {
            head = tail = temp;
            tail->next = head;
            return;
        }

        tail->next = temp;
        tail = temp;
        tail->next = head;
        return;
    }

    void insertAt(int data, int pos)
    {
        node *temp = new node();
        temp->data = data;
        node *current = head;
        for (int i = 0; i < pos - 1; i++)
        {
            current = current->next;
        }
        temp->next = current->next;
        current->next = temp;
    }

    void popAt(int pos)
    {
        node *temp = new node();
        node *current = head;
        while (pos--)
        {
            current = current->next;
        }
        temp = current->next;
        current->next = temp->next;
        delete temp;
    }

    void popValue(int value)
    {
        node *temp = new node();
        node *current = head;
        while (current->next->data != value)
        {
            current = current->next;
        }
        temp = current->next;
        current->next = temp->next;
        delete temp;
    }

    void print()
    {
        node *temp = head;
        do
        {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }
};

int main()
{
    circleList list;
    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.insert(4);
    list.insert(5);
    list.print();
    list.popValue(3);
    list.print();
    free(list.head);
    return 0;
}
