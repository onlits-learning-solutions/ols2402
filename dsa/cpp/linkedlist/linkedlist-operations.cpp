#include <iostream>

using namespace std;

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
    };
}

int main(int argc, char const *argv[])
{
    adt::Node *head;
    head = new adt::Node();
    head->setData(10);
    cout << head->getData() << endl;
    return 0;
}