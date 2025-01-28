#include <iostream>

using namespace std;

namespace employee
{
    class Employee // Base class
    {
    protected:
        int empId;
        string name;
        string designation;
    };

    class Manager : Employee // Derived class
    {
    private:
        int attendance; // instance variable
        float salary;

    public:
        Manager() {}                                                                       // default constructor
        Manager(int empId, string name, string designation, int attendance, float salary); // Parameterized Constructor
        ~Manager();
        void display();
    };

    Manager::Manager(int empId, string name, string designation, int attendance, float salary) // local variable
    {
        this->empId = empId;
        this->name = name;
        this->designation = designation;
        this->attendance = attendance;
        this->salary = salary;
    }

    Manager::~Manager()
    {
        cout << "Manager object deleted!" << empId << endl;
    }

    void Manager::display()
    {
        cout << "Id: " << empId << endl;
        cout << "Name: " << name << endl;
        cout << "Designation: " << designation << endl;
        cout << "Attendance: " << attendance << endl;
        cout << "Salary: " << salary << endl;
    }

    class Worker : Employee // Derived class
    {
    private:
        int hours; // only round numbers allowed a worker can work for 1 hour or 2 hours but not 1.5 hours.
        float wage;

    public:
        Worker() {}
        Worker(int empId, string name, string designation, int hours, float wage);
        ~Worker();
        void display();
    };

    Worker::Worker(int empId, string name, string designation, int hours, float wage)
    {
        this->empId = empId;
        this->name = name;
        this->designation = designation;
        this->hours = hours;
        this->wage = wage;
    }

    void Worker::display()
    {
        cout << "Employee Id: " << empId << endl;
        cout << "Name: " << name << endl;
        cout << "Designation: " << designation << endl;
        cout << "Hours: " << hours << endl;
        cout << "Wage: " << wage << endl;
    }

    Worker::~Worker()
    {
        cout << "Worker object deleted!" << empId << endl;
    }
}

int main(int argc, char const *argv[])
{
    employee::Manager m1(1, "Santosh Kumar", "Accounts Manager", 21, 15000.00F), m2(2, "Raju Kumar", "Sales Manager", 23, 16000.00F);
    employee::Worker w1(3, "Ram Parvesh", "Fitter", 200, 10000.00F), w2(4, "Mohan Kumar", "Loom Operator", 220, 11000.00F);
    m1.display();
    m2.display();
    w1.display();
    w2.display();
    return 0;
}