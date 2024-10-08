class node // self-referential class
{
    int data;
    node *next;
};

int main(int argc, char const *argv[])
{
    node head;
    head.data = 10;
    cout << head.data << endl;
    return 0;
}
