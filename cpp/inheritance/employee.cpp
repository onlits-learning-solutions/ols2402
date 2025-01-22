#include <iostream>

using namespace std;

namespace employee
{
    class Employee // Base class
    {
    private:
        int empId;
        string name;
        string designation;

    public:
        Employee(/* args */); // Constructor
        ~Employee();          // Destructor
    };

    Employee::Employee(/* args */)
    {
    }

    Employee::~Employee()
    {
    }

    class Manager // Derived class
    {
    private:
        int attendance;     //instance variable
        float salary;

    public:
        Manager() {}                           // Default Constructor
        Manager(int attendance, float salary); // Parameterized Constructor
        ~Manager();
        void display();
    };

    Manager::Manager(int attendance, float salary)      //local variable
    {
        this->attendance = attendance;
        this->salary = salary;
    }

    Manager::~Manager()
    {
    }

    void Manager::display()
    {
        cout << "Attendance: " << attendance << endl;
        cout << "Salary: " << salary << endl;
    }

    class Worker // Derived class
    {
    private:
        int hours; // only round numbers allowed a worker can work for 1 hour or 2 hours but not 1.5 hours.
        float wage;

    public:
        // Worker(/* args */);
        ~Worker();
    };

    // Worker::Worker(/* args */)
    // {
    // }

    Worker::~Worker()
    {
    }
}

int main(int argc, char const *argv[])
{
    employee::Manager m1(21, 15000.00F), m2(23, 16000.00F);
    employee::Manager m3;
    employee::Worker w1, w2;
    m1.display();
    m2.display();
    return 0;
}