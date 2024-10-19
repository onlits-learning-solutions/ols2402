#include <iostream>
#include <cstring>

#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define BLUE "\x1b[34m"
#define RESET "\x1b[0m"

#define BOLD "\e[1m"
#define ITALICS "\e[3m"
#define UNDERLINE "\e[4m"
#define OFF "\e[m"

#define ERROR 0
#define INFO 1
#define NORMAL 2

using namespace std;

void drawLine(int n, int type);
void messageBox(string message, int type);

namespace adt
{
    class Node // self-referential class
    {
        int data;
        Node *next;

    public:
        void setData(int data)
        {
            this->data = data;
        }

        int getData()
        {
            return data;
        }

        void setNext(Node *next)
        {
            this->next = next;
        }

        Node* getNext()
        {
            return next;
        }
    };

    class LinkedList
    {
        Node *head = NULL;

    public:
        void diplay();
    };

    void LinkedList::diplay()
    {
        if(!head)
        {
            messageBox("List empty!", ERROR);
            return;
        }

        Node *itr = head;

        cout << "Contents of the list" << endl;
        drawLine(strlen("Contents of the list"), NORMAL);
        
        while(itr->getNext())
        {
            cout << itr->getData() << endl;
        }

        drawLine(strlen("Contents of the list"), NORMAL);
    }
}

void drawLine(int n, int type) // O(n)
{
    for (int i = 1; i <= n; i++)
    {
        if (type == INFO)
            printf(GREEN BOLD "-" OFF RESET);
        else if (type == ERROR)
            printf(RED BOLD "-" OFF RESET);
        else
            printf("-");
    }
}

void messageBox(string message, int type) // O(1)
{
    printf("\n");
    drawLine(message.length(), type);
    if (type == INFO)
        cout << endl
             << GREEN BOLD << message << OFF RESET << endl;
    else if (type == ERROR)
        cout << endl
             << RED BOLD << message << OFF RESET << endl;
    else
        cout << endl
             << message << endl;
    drawLine(message.length(), type);
    printf("\n");
}

int main(int argc, char const *argv[])
{
    adt::LinkedList linkedList;

    int ch;
    int linesize = strlen("1.  Display list (Traversal)");

    while (1) // Cannot determine complexity as this process does not comply
    {         // standard algorithm definition
        printf(BOLD "\nMAIN MENU\n" OFF);
        drawLine(linesize, NORMAL);
        printf("\n1. Display list (Traversal)\n");
        printf("2. Insert\n");
        printf("3. Delete\n");
        printf("4. Search\n");
        printf("5. Check sort status\n");
        printf("6. Sort\n");
        printf("7. Seed Array\n");
        drawLine(linesize, NORMAL);
        printf("\nEnter choice [0 to exit]: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 0:
            printf(BLUE BOLD "\nbye!\n\n" RESET);
            exit(0);
            break;
        case 1:
            linkedList.diplay();
            break;
        case 2:
            // insertMenu(arr, &size);
            break;
        case 3:
            // deleteMenu(arr, &size);
            break;
        case 4:
            // searchMenu(arr, size);
            break;
        case 5:
            // isSorted(arr, size);
            break;
        case 6:
            // sortMenu(arr, size);
            break;
        case 7:
            // seed(arr, &size);
            break;
        default:
            messageBox("Invalid Option!", ERROR);
            break;
        }
    }
    return 0;
}