//#include <iostream>
//using namespace std;
//
//class MedicalLab{
//	
//	
//	
//};
//
//int main() {
//	
//	char** testReports;
//	
//	int noOfReports;
//	cout << "Enter no of test reports: ";
//	cin >> noOfReports;
//	
//	testReports = new char*[noOfReports];
//	for (int i = 0; i < noOfReports; i++){
//		testReports[i] = new char[50];
//	}
//	 
//	cout << "Enter test reports:\n";
//    for (int i = 0; i < noOfReports; i++) {
//    	cout << "Test " << i+1 << " : ";
//        for (int j = 0; testReports[i][j] != '\0'; j++) {
//            cin >> testReports[i][j];  
//        }
//    }
//	
//	cout << "\nList of Test Reports:\n";
//    for (int i = 0; i < noOfReports; i++) {
//        for (int j = 0; testReports[i][j] != '\0' ; j++) {
//            cout << testReports[i][j] ;
//        }
//        cout << endl;
//    }
//	
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//class MedicalLab
//{
//public:
//    int *id;
//    string name;
//    char* recentTestResults;
//
//    MedicalLab(int id, string name, char tests[20][20])
//    {
//        this->id = new int(id);
//        this->name = name;
//        for(int i = 0; i < 20; i++) {
//        	for (int j = 0; j < 20; j++) {
//        		this->recentTestResults= new char(tests[i][j]);
//			}
//		} 
//    }
//
//    MedicalLab(const MedicalLab &obj)
//    {
//        id = new int(*obj.id);
//        name = obj.name;
//        for(int i = 0; i < 20; i++) {
//        	for (int j = 0; j < 20; j++) {
//        		this->recentTestResults= new char(obj->recentTestResults[i][j]);
//			}
//		} 
//        cout << "\n Hello from Deep Copy!\n"
//             << endl;
//    }
//
//    void Details()
//    {
//        cout << "\nCar Details: " << endl;
//        cout << "ID: " << *id << endl;
//        cout << "Name: " << name << endl;
//
//		for(int i = 0; i < 20; i++) {
//        	for (int j = 0; j < 20; j++) {
//        		cout << "Test Result " << i << " : " << recentTestResults[i][j] << endl;
//			}
//		} 
//        cout << endl;
//    }
//};
//
//int main()
//{
//    MedicalLab report1 = (101, "Maryam", {"BloodPressure", "Diabitic", "Suger", "Malaria"});
//
//    MedicalLab report2(&report1);
//
//    report1.displayCarDetails();
//    report2.displayCarDetails();
//
//    return 0;
//}