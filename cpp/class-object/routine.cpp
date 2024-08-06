#include <iostream>

using namespace std;

class period
{
    int id;
    string day;
    string time;
    string subject;
    string teacher;
};

class routine
{
    period periods; // periods is an object (static allocation)
    // period *periods = new period(); //here periods is not an object but it is pointer to object. (dynamic allocation)

    void setdata()
    {
        periods.id = 1;
    }
};

int main(void)
{

    return 0;
}
