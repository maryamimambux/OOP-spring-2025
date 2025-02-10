#include <iostream>
using namespace std;

class Student {

    double gpa;

    public:
        int rollNo;
        string name;
        int age;

    // default constructors
    Student () {
        cout << "\nDefault Constructor is called!" << endl;
        rollNo = 0;
        name = "";
        age = 0;
        gpa = 0.0;
        
    } 

    // Copy Constructor
    Student (const Student& s) {
        cout << "\nCopy Constructor is called!" << endl;
        name = s.name;
        rollNo = s.rollNo;
        age = s.age;
        gpa = s.gpa;

    }

    Student ( int rollNo, string name, int age, double gpa) {
        cout << "\nParametrized - 04 Constructor is called!" << endl;
        this->name = name;
        this->rollNo = rollNo;
        this->age = age;
        this->gpa = gpa;
    }
        
    Student ( int rollNo, string name) {
        cout << "\nparametrised - 02 Constructor is called!" << endl;
        this->name = name;
        this->rollNo = rollNo;
    }

    Student ( string name) {
        cout << "\nparametrised - 01 Constructor is called!" << endl;
        this->name = name;
         
    }

    void set(int rollNo, string name, int age, double gpa) {
        this->name = name;
        this->rollNo = rollNo;
        this->age = age;
        this->gpa = gpa; 
    } 

    void display() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "GPA: " << gpa << endl;
    }

};

int main() { 
    //cout << "World: Hello Maryam!" << endl;
    Student s1(3011, "Maryam", 18, 3.62);
   

    cout << "Student s1: " << endl;
    s1.display();
    cout << endl;

    Student s2 = s1;

    cout << "Student s2: " << endl;
    s2.display();

    return 0;
}
