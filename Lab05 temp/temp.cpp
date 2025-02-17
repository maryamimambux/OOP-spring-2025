#include <iostream>
using namespace std;

class MedicalLab
{
public:
    int *ID;
    string name;
    string *recentTestResults = new string(20);

    MedicalLab(int ID, string name, char tests[20])
    {
        this->ID = new int(ID);
        this->name = name;
        this->recentTestResults = new string(20);
    }

    MedicalLab(const MedicalLab &obj)
    {
        ID = new int(*obj.ID);
        name = obj.name;
        for (int i = 0; i < 20; i++)
        {
            obj.recentTestResults[i] = recentTestResults[i];
        }
        cout << "\n Hello from Deep Copy!\n"
             << endl;
    }

    void displayCarDetails()
    {
        cout << "\nCar Details: " << endl;
        cout << "ID: " << *ID << endl;
        cout << "Name: " << name << endl;

        for (int i = 0; i < 20; i++)
        {
            cout << "" << recentTestResults[i] << endl;
        }
    }
};

int main()
{
    MedicalLab *report1 = new MedicalLab(101, "Maryam", "BloodPressure", "Diabities");

    MedicalLab report2(*report1);

    report1->displayCarDetails();
    report2.displayCarDetails();

    return 0;
}
