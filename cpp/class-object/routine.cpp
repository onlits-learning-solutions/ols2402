#include <iostream>

using namespace std;

class period
{
    int id;                 //instance variable
    string day;
    string time;
    string subject;
    string teacher;

    void setPeriod(int id, string day, string time, string subject, string teacher)
    {
        this->id = id;
        this->day = day;
        this->time = time;
    }

    void setId(int id)      //setter method
    {
        this->id = id;
    }

    int getId()             //getter method
    {
        return id;
    }

    void setDay(string day)
    {
        day = day;
    }
};

class routine
{
    period periods; // periods is an object (static allocation)
    // period *periods = new period(); //here periods is not an object but it is pointer to object. (dynamic allocation)

    void setRoutine()
    {
        
    }
};

int main(void)
{

    return 0;
}
