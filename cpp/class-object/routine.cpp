#include <iostream>

using namespace std;

struct period
{
    int id; // instance variable
    string day;
    string time;
    string subject;
    string teacher;

public:
    period() {}
    period(int id, string day, string time, string subject, string teacher);
    void setId(int id);
    int getId();
    void setDay(string day);
};

period::period(int id, string day, string time, string subject, string teacher)
{
    this->id = id;
    this->day = day;
    this->time = time;
    this->subject = subject;
    this->teacher = teacher;
}

void period::setId(int id) // setter method
{
    this->id = id;
}

int period::getId() // getter method
{
    return id;
}

void period::setDay(string day)
{
    day = day;
}

class routine
{
    period periods[48];

public:

    void setRoutine()
    {
        // period1.setPeriod(1, "Monday", "9:00-10:00", "Hindi", "RKS");
        // period2.setPeriod(2, "Monday", "10:00-11:00", "English", "KD");
        // period3.setPeriod(3, "Monday", "11:00-12:00", "Mathematics", "SS");
    }

    void displayRoutine()
    {
        cout << "id: " << periods[0].getId() << endl; // here endl is manipulator
    }
};

int main(void)
{
    routine routine10;
    routine10.setRoutine();
    routine10.displayRoutine();
    return 0;
}
