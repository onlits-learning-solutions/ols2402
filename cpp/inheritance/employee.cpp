#include <iostream>

using namespace std;

namespace employee
{
    class Employee
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

    class Manager
    {
    private:
        int attendance;
    public:
        Manager(/* args */);
        ~Manager();
    };

    Manager::Manager(/* args */)
    {
        int attendance;
        float salary;
    }

    Manager::~Manager()
    {
    }

    class Worker
    {
    private:
        int hours;      // only round numbers allowed a worker can work for 1 hour or 2 hours but not 1.5 hours.
        float wage;
    public:
        Worker(/* args */);
        ~Worker();
    };

    Worker::Worker(/* args */)
    {
    }

    Worker::~Worker()
    {
    }
}

int main(int argc, char const *argv[])
{
    employee::Manager m1, m2;
    employee::Worker w1, w2;
    return 0;
}