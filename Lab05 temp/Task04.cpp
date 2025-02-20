#include <iostream>
using namespace std;

class Battery{ 
	int capacity;
	double voltage; 
	bool preInitial;
	bool nonRemoveable; 
	
	public:
	
	Battery () {}
	
	Battery(int capacity, bool preInitial, double voltage, bool nonRemoveable)
		: capacity(capacity), voltage(voltage), preInitial(preInitial), nonRemoveable(nonRemoveable) {}
		
	void display() {
		cout << "Battery Spacifications: " << endl;
		cout << "Capacity (mAh): " << capacity << endl; 
		cout << "Votage: " << voltage << endl;
		cout << "Pre-Initialized: " << ( preInitial? "Yes\n": "No\n");
		cout << "Non-Removeable: " << ( nonRemoveable? "Yes\n": "No\n");
	}
	
	~Battery() {
		cout << "\nBattery Destroyed!\n";
	}
	
};

class Smartphone{
	 // COMPOSITION - Battery can't exit without Smartphone
	
	string model;
	string processor;
	int storage;
	Battery b1;	
		
	public:

	
	Smartphone () {}
		
	Smartphone (string model, string processor, int storage)
		: model(model), processor(processor), storage(storage) {}
 
	void display() {
		cout << "\nSmartphone Details: " << endl;
		cout << "Model: " << model << "\nProcessor: " << processor << "\nStorage(GB): " << storage << endl;
		b1.display(); 
	}
	
	~Smartphone() {
		cout << "\nSmartphone Destroyed!\n";
	}
	
};

int main() {
		
	Battery b1 (5600, 1, 3.7, 1);
	Battery b2 (6000, 1, 4.2, 1);
	Battery b3 (3700, 1, 5.2, 1);
	
	Smartphone s1("Apple iPhone SE 4", "Apple A18 chip", 128);
	Smartphone s2("Samsung Galaxy S25 Ultra", "Qualcomm Snapdragon 8 Elite", 1000);
	Smartphone s3("Huawei Mate XT", "Kirin 9000 series", 1000);
	
	s1.display();
	s2.display();
	s3.display();
	
	
	return 0;
}
	


//#include <iostream>
//using namespace std;
//
//class Professors{
//	
//	string name;
//	string department;
//	
//	public:	
//	Professors(string name, string department)
//		: name(name), department(department) {}	
//	void getName(string name){
//        this->name = name;
//    }
//    void getDept(string department){
//        this->department = department;
//    }
//    void display() { 
//        cout << "Name: " << name << endl;
//        cout << "Department: " << department << endl;
//	}
//	
//};
//
//class University{
//	 
//	Professors* p1[10];
//	string uniName;
//	int count = 0;
//	
//	public:
//	University(string uniName)
//		: uniName(uniName) {}
//		
//	void addProfessor(Professors *p) {
//        if (count < 10) { p1[count++] = p; }
//        else { cout << "University is full!" << endl; }
//    }
//	
//	void display() { 
//		cout << uniName << " University Detail: \n" << endl;
//        for (int i = 0; i < count; i++) {
//            cout << "Professor " << i + 1 << ": " << endl;
//            p1[i]->display();
//            cout << endl;
//        }
//	}
//};
//
//
//int main() {
//	
//	Professors p1("Baber", "CS"), p2("Ali", "SE"), p3("Hamid", "DS");
//	
//	University uni ("FAST NUCES"); 
//	
//	uni.addProfessor(&p1);
//    uni.addProfessor(&p2);
//    uni.addProfessor(&p3);
//	
//	uni.display();
//	
//	return 0;
//}