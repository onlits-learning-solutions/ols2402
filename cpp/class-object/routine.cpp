#include <iostream>
#include <iomanip>

#define SIZE 48
#define SLOTS 8

using namespace std;

class period
{
    int id; // instance variable
    string day;
    string time;
    string subject;
    string teacher;
    static int idCount;

public:
    period();
    period(string day, string time, string subject, string teacher);
    int getId();
    void setDay(string day);
    string getDay();
    void setTime(string time);
    string getTime();
    void setSubject(string subject);
    string getSubject();
    void setTeacher(string teacher);
    string getTeacher();
};

period::period()
{ // default constructor
    id = ++idCount;
}

period::period(string day, string time, string subject, string teacher)
{ // parameterized constructor
    id = ++idCount;
    this->day = day;
    this->time = time;
    this->subject = subject;
    this->teacher = teacher;
}

int period::getId() // getter method
{
    return id;
}

void period::setDay(string day)
{
    day = day;
}

string period ::getDay()
{
    return day;
}

void period ::setTime(string time)
{
    this->time = time;
}

string period ::getTime()
{
    return time;
}

void period ::setSubject(string subject)
{
    this->subject = subject;
}

string period ::getSubject()
{
    return subject;
}

void period ::setTeacher(string teacher)
{
    this->teacher = teacher;
}

string period ::getTeacher()
{
    return teacher;
}

int period ::idCount;

class routine
{
    string days[7] = {"Monday", "Tuesday", "Wednesday"};
    period periods[SIZE];

public:
    void setRoutine()
    {
        periods[0].setDay("Monday");
        periods[0].setTime("9:00 - 10:00");
        periods[0].setSubject("HIN");
        periods[0].setTeacher("SD");

        periods[1].setDay("Monday");
        periods[1].setTime("10:00 - 11:00");
        periods[1].setSubject("ENG");
        periods[1].setTeacher("RKS");

        periods[2].setDay("Monday");
        periods[2].setTime("11:00 - 12:00");
        periods[2].setSubject("MATH");
        periods[2].setTeacher("MS");

        periods[8].setDay("Tuesday");
        periods[8].setTime("9:00 - 10:00");
        periods[8].setSubject("HIN");
        periods[8].setTeacher("SD");

        periods[16].setDay("Tuesday");
        periods[16].setTime("9:00 - 10:00");
        periods[16].setSubject("HIN");
        periods[16].setTeacher("SD");
    }

    void displayRoutine()
    {
        cout << "---------------------------------------------------------------------------------------------------------------------------" << endl;
        cout  << "\t";
        for (int i = 0; i < SLOTS; i++)
        {
            cout << setw(15) << periods[i].getTime();
        }
        cout << endl;
        cout << "---------------------------------------------------------------------------------------------------------------------------" << endl;

        cout << "Monday";
        for (int i = 0; i < SIZE; i++)
        {
            cout << setw(10) << periods[i].getSubject() << "(" << periods[i].getTeacher() << ")";
            if ((i + 1) % SLOTS == 0)
            {
                cout << endl
                     << endl;
                     cout << periods[8].getDay();
            }
        }
        cout << "---------------------------------------------------------------------------------------------------------------------------" << endl;
    }
};

int main(void)
{
    routine r;
    r.setRoutine();
    r.displayRoutine();
    return 0;
}