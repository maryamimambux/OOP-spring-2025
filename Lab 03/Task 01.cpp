#include <iostream>
using namespace std;

class Student
{
    string name;
    string rollNo;
    int age;
    string course;

public:
    string universityName = "FAST - NUCES";

    // Setters
    void setValue(string name, string rollNo, int age, string course)
    {
        this->name = name;
        this->rollNo = rollNo;
        this->age = age;
        this->course = course;
    }

    // Getters
    string getName()
    {
        return name;
    }

    string getRollno()
    {
        return rollNo;
    }

    int getage()
    {
        return age;
    }

    string getcourse()
    {
        return course;
    }
};

int main()
{

    Student s1;

    s1.setValue("Maryam", "24K-3011", 18, "Object-Oriented-Programming");
    cout << endl;
    cout << "Name: " << s1.getName() << endl;
    cout << "Roll No: " << s1.getRollno() << endl;
    cout << "Age: " << s1.getage() << endl;
    cout << "Course: " << s1.getcourse() << endl;
    cout << "University: " << s1.universityName << endl;

    Student s2;

    s2.setValue("Haleema", "24K-3022", 17, "Programming Fundamental");
    cout << "____________________________________________" << endl;
    cout << endl;
    cout << "Name: " << s2.getName() << endl;
    cout << "Roll No: " << s2.getRollno() << endl;
    cout << "Age: " << s2.getage() << endl;
    cout << "Course: " << s2.getcourse() << endl;
    cout << "University: " << s2.universityName << endl;

    return 0;
}
