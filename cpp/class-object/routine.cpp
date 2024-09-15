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
    string days[6] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    string slots[SLOTS] = {"9:00-10:00", "10:00-11:00", "11:00-12:00", "12:00-1:00", "1:00-2:00", "2:00-3:00", "3:00-4:00", "4:00-5:00"};
    period periods[SIZE];

public:
    void setPeriod(int id, string subject, string teacher);
    void getRoutine();
};

void routine::setPeriod(int id, string subject, string teacher)
{
    periods[id].setSubject(subject);
    periods[id].setTeacher(teacher);
}

void routine::getRoutine()
{
    cout << "---------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "\t";
    for (int i = 0; i < SLOTS; i++)
    {
        cout << setw(15) << slots[i];
    }
    cout << endl;
    cout << "---------------------------------------------------------------------------------------------------------------------------" << endl;

    cout << days[0];
    for (int i = 0, j = 1; i < SIZE; i++)
    {
        cout << setw(10) << periods[i].getSubject() << "(" << periods[i].getTeacher() << ")";
        if ((i + 1) % SLOTS == 0)
        {
            cout << endl
                 << endl;
            if (j <= 5)
            {
                cout << days[j];
                j++;
            }
        }
    }
    cout << "---------------------------------------------------------------------------------------------------------------------------" << endl;
}

int main(void)
{
    routine I, II, III;
    I.setPeriod(0, "Hindi", "GD");
    I.setPeriod(1, "English", "RKS");
    I.setPeriod(8, "Hindi", "GD");
    I.setPeriod(9, "English", "RKS");
    I.setPeriod(16, "Hindi", "GD");
    I.setPeriod(17, "English", "RKS");
    I.setPeriod(24, "Hindi", "GD");
    I.setPeriod(25, "English", "RKS");
    I.setPeriod(32, "Hindi", "GD");
    I.setPeriod(33, "English", "RKS");
    I.setPeriod(40, "Hindi", "GD");
    I.setPeriod(41, "English", "RKS");
    I.getRoutine();
    return 0;
}