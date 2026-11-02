#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

int main()
{
    Node *first = nullptr;
    Node *last = nullptr;

    int choice, value;

    do
    {
        cout << "\n\n==== LINKED LIST MENU ====";
        cout << "\n1. Create Node";
        cout << "\n2. Display List";
        cout << "\n3. Delete First Node";
        cout << "\n4. Exit";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cout << "Enter value: ";
            cin >> value;

            // Create node dynamically
            Node *newNode = new Node(value);

            if (first == nullptr)
            {
                // First node
                first = newNode;
                last = newNode;
            }
            else
            {
                // Add node at the end
                last->next = newNode;
                last = newNode;
            }

            cout << "Node inserted successfully!";
            break;
        }

        case 2:
        {
            if (first == nullptr)
            {
                cout << "Node list is empty!";
            }
            else
            {
                Node *temp = first;

                cout << "Linked List: ";

                while (temp != nullptr)
                {
                    cout << temp->data << " -> ";
                    temp = temp->next;
                }

                cout << "NULL";
            }

            break;
        }

        case 3:
        {
            if (first == nullptr)
            {
                cout << "Node list is empty!";
            }
            else
            {
                Node *temp = first;

                first = first->next;

                // If list becomes empty
                if (first == nullptr)
                {
                    last = nullptr;
                }

                delete temp;

                cout << "First node deleted successfully!";
            }

            break;
        }

        case 4:
        {
            cout << "Exiting program...";
            break;
        }

        default:
        {
            cout << "Invalid choice!";
        }
        }
    }
    while (choice != 4);

    return 0;
}
