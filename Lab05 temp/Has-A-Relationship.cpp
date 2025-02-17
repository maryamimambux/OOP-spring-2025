#include <iostream>
using namespace std;

class Employee
{
public:
    int id;
    string name;

    Employee(int id, string name) : id(id), name(name) {}

    void getName(string name)
    {
        this->name = name;
    }

    void display()
    {
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
    }
};

class Department
{
public:
    string deptName;
    Employee *e1[10];
    int employeeCount = 0;

    Department(string deptName) : deptName(deptName) {}

    void getName(string name)
    {
        this->deptName = name;
    }

    void addEmployee(Employee *e)
    {
        if (employeeCount < 10)
        {
            e1[employeeCount++] = e;
        }
        else
        {
            cout << "Department is full!" << endl;
        }
    }

    void display()
    {
        cout << "Department Name: " << deptName << endl;
        for (int i = 0; i < employeeCount; i++)
        {
            cout << "Employee " << i + 1 << ": " << endl;
            e1[i]->display();
        }
    }
};

int main()
{
    Employee e1(101, "Baber"), e2(102, "Ali"), e3(103, "Hamid");

    Department d1("AI"); // Fixed constructor to only take the department name

    d1.addEmployee(&e1);
    d1.addEmployee(&e2);
    d1.addEmployee(&e3);

    d1.display();

    return 0;
}

// #include <iostream>
// using namespace std;

// class Employee
// {
// public:
//     int id;
//     string name;

//     Employee(int id, string name) : id(id), name(name) {}

//     void getName(string name)
//     {
//         this->name = name;
//     }

//     void display()
//     {
//         cout << "Employee ID: " << id<< endl;
//         cout << "Employee Name: " << name << endl;
//     }
// };

// class Department
// {
// public:
//     string deptName;
//     Employee* e1[10];
//     int employeeCount = 0;

//     Department (int employeeCount, string deptName) : employeeCount(employeeCount), deptName(deptName) {}

//     void getName(string name)
//     {
//         this->deptName = deptName;
//     }

//     void addEmployee (Employee *e) {
//         e1[employeeCount++] = e;
//     }

//     void display()
//     {
//         cout << "Department Name: " << deptName << endl;
//         for (int i = 0 ; i < employeeCount; i++) {
//             cout << "Emp " << employeeCount << ": " << e1[i] ->display << endl;
//         }
//     }
// };

// int main() {
//     Employee e1 (101, "Baber"), e2 (102, "Ali"), e3(103, "Hamid");

//     Department d1("AI");

//     d1.addEmployee(&e2);
//     d1.addEmployee(&e3);

//     d1.display();

// }
