//-----------------------------------------------------------------
//Task 8: Real world use Case-Inventory Managment

//#include <iostream>
//using namespace std;
//
//// Defination of Structure - Product
//struct Product {
//	// Feilds
//	long long productID;
//	string name;
//	int quantity;
//	double price;	
//};
//
//// Allocation
//Product* allocateMemory( int noOfProducts) {  
//    return new Product[noOfProducts];
//}
//
//// Add Product Function
//void add(Product*products, int& count) {
//	cout << "\nAdd Product Details\n";
//	cout << "Name: ";
//	cin.ignore(); 
//	getline (cin, products[count].name);
//	cout << "ID: ";
//	cin >> products[count].productID;
//	cout << "Quantity: ";
//	cin >> products[count].quantity;
//	cout << "Price: $";
//	cin >> products[count].price;
//	
//	count++;
//}
//
//// Remove Product Function
//void remove(Product*products, int& count) {
//	bool found = false;
//	int productID; 
//	cout << "\nTo Remove the product enter its Product ID: ";
//	cin >> productID;
//	
//	for (int i = 0; i < count; i++) {
//		if (productID == products[i].productID) {
//			found = true;
//			products[i].name = products[i+1].name;
//			products[i].productID = products[i+1].productID;
//			products[i].quantity = products[i+1].quantity;
//			products[i].price = products[i+1].price;
//		}
//	}
//	if(found) cout << "Product Successfully Removed!\n";
//	count--;
//	
//}
//
//
//// Update Product Function
//void update(Product*products, int& count) {
//	bool found = false;
//	int productID; 
//	cout << "To Remove the product enter its Product ID: ";
//	cin >> productID;
//	
//	for (int i = 0; i < count; i++) {
//		if (productID == products[i].productID) {
//			found = true;
//			cout << "Name: ";
//			cin.ignore(); 
//			getline (cin, products[i].name);
//			cout << "ID: ";
//			cin >> products[i].productID;
//			cout << "Quantity: ";
//			cin >> products[i].quantity;
//			cout << "Price: $";
//			cin >> products[i].price;
//		}
//		
//	}
//	if(found) cout << "\nProduct Successfully Updated!\n";
//}                                               
//
//// Display All Products Function
//void display(Product*products, int& count) {
//	cout << "\nAll Product Details\n\n";
//	for (int i = 0; i < count; i++) {
//		cout << "\nProduct " << i+1 << " : \n" ;
//		cout << "Name: " << products[i].name << endl;
//		cout << "ID: " << products[i].productID << endl;
//		cout << "Quantity: " << products[i].quantity << endl;
//		cout << "Price: $" <<  products[i].price << endl;
//	}
//	cout << endl;
//}
//
//// Display total inventory value
//void inventoryValue(Product*products, int& count) {
//	 
//	double totalValue = 0.0;
//	for (int i = 0; i < count; i++) {
//		totalValue += (products[i].quantity * products[i].price);	
//	}
//	cout << "Total Value of Inventory: " << totalValue << endl;
//}
//
//// main function
//int main () {
//	
//	cout << "*Inventory Managment System*\n\n";
//	
//	int noOfProducts;
//	cout << "Enter number of products: ";
//	cin >> noOfProducts;
//	
//	// Allocation
//	Product* products = allocateMemory(noOfProducts);
//	
//	int choice;
//	int count = 0;
//
//	// Menu of Functions
//	while(true) {
//		cout << "\n0. Exit.\n";
//		cout << "1. Add Product.\n";
//		cout << "2. Remove Product.\n";
//		cout << "3. Update Product.\n";
//		cout << "4. Display Products.\n";
//		cout << "5. Total Inventory Value.\n";
//		
//		cout << "\nEnter Choice from above: ";
//		cin >> choice;
//		
//		switch (choice) {
//			case 0: 
//				exit(1);
//				break;
//			case 1:
//				add(products, count);
//				break;
//			case 2:
//				remove(products, count);
//				break;
//			case 3:
//				update(products, count);
//				break;
//			case 4:
//				display(products, count);
//				break;
//			case 5:
//				inventoryValue(products, count);
//				break;
//			default:
//				cout << "Invalid Choice!\n";
//			
//		}
//	}
//	
//	// Deallocation
//	delete[] products;
//	
//	return 0;
//} // end main function

//-----------------------------------------------------------------
//Task 7: Pointers and Functions

//#include <iostream>
//using namespace std;
//
//// Swap two integers using poiters
//void swapIntegers (int* num1 ,int* num2) {
//	int temp = *num1;
//	* num1 = *num2;
//	* num2 = temp;
//}
//
//// Swap an array using poiters
//void swapArray (int* arr, int n) {
//	for (int i = n-1; i >= 0; i--) {
//		cout << *(arr + i) << " ";
//	}	
//}
//
//int main() {
//	
//	int a, b, n;
//	cout << "Enter two integers: ";
//	cin >> a >> b;
//	
//	int* num1 = new int(a);
//	int* num2 = new int(b);
//	
//	swapIntegers (num1, num2);
//	cout << "Swaped integers: " << *num1 << " " << *num2 << endl;
//	
//	delete num1;
//	delete num2;
//	
//	cout << "\nEnter no of elements: ";
//	cin >> n;
//	
//	int* arr = new int[n];
//	
//	for (int i = 0; i < n; i++) {
//		cout << "Element " << i +1 << ": ";
//		cin >> arr[i];
//	}
//	
//	cout << "\nOriginal Array: ";
//	for (int i = 0; i < n; i++) {
//		cout << *(arr + i) << " ";
//	}
//
//	cout << "\nReversed Array: ";
//	swapArray(arr, n) ;
//
//	delete[] arr;
//
// 	return 0;
//}


//-----------------------------------------------------------------
//Task 6: Library Managment System


//========================

//#include <iostream>
//using namespace std;
//
//struct Book {
//    int bookID;
//    string title;
//    string author;
//    bool isAvailable;
//
//    // Constructor to initialize book
//    Book() : bookID(0), title(""), author(""), isAvailable(false) {}
//
//    void add() {
//        cout << "Enter Book ID: ";
//        cin >> bookID;
//        cin.ignore(); // To clear newline character
//
//        cout << "Enter Title: ";
//        getline(cin, title);
//
//        cout << "Enter Author Name: ";
//        getline(cin, author);
//
//        cout << "Enter Availability (Yes or No): ";
//        string availability;
//        cin >> availability;
//        isAvailable = (availability == "Yes" || availability == "yes");
//
//        cout << "Book added successfully!\n";
//    }
//
//    void show() {
//        if (bookID != 0) { // Display only valid books
//            cout << "\nBook ID: " << bookID << endl;
//            cout << "Title: " << title << endl;
//            cout << "Author: " << author << endl;
//            cout << "Availability: " << (isAvailable ? "Yes" : "No") << endl;
//        }
//    }
//};
//
//// Function to remove a book and shift remaining books
//void removeBook(int id, Book* books, int& noOfBooks) {
//    bool found = false;
//    for (int i = 0; i < noOfBooks; i++) {
//        if (books[i].bookID == id) {
//            found = true;
//            for (int j = i; j < noOfBooks - 1; j++) {
//                books[j] = books[j + 1]; // Shift books
//            }
//            noOfBooks--; // Reduce book count
//            cout << "Book Removed Successfully!\n";
//            return;
//        }
//    }
//    if (!found) {
//        cout << "No Book found with ID: " << id << endl;
//    }
//}
//
//// Function to search for a book
//void searchBook(int id, Book* books, int noOfBooks) {
//    for (int i = 0; i < noOfBooks; i++) {
//        if (books[i].bookID == id) {
//            cout << "Book Found:\n";
//            books[i].show();
//            return;
//        }
//    }
//    cout << "No Book found with ID: " << id << endl;
//}
//
//// Function to display all books
//void displayBooks(Book* books, int noOfBooks) {
//    cout << "\nAvailable Books:\n";
//    for (int i = 0; i < noOfBooks; i++) {
//        books[i].show();
//    }
//}
//
//// Menu function
//void menu(Book*& books, int& noOfBooks) {
//    while (true) {
//        int select;
//        cout << "\nSelect from the following: " << endl;
//        cout << "0. Exit\n";
//        cout << "1. Add a Book\n";
//        cout << "2. Remove a Book\n";
//        cout << "3. Search a Book\n";
//        cout << "4. Display All Books\n";
//        cout << "Enter your choice: ";
//        cin >> select;
//
//        switch (select) {
//            case 0:
//                delete[] books;
//                cout << "Exiting program.\n";
//                return;
//            case 1: {
//                // Dynamically resize the array to add a new book
//                Book* newBooks = new Book[noOfBooks + 1];
//                for (int i = 0; i < noOfBooks; i++) {
//                    newBooks[i] = books[i];
//                }
//                delete[] books;
//                books = newBooks;
//                
//                books[noOfBooks].add();
//                noOfBooks++;
//                break;
//            }
//            case 2: {
//                int id;
//                cout << "Enter Book ID to remove: ";
//                cin >> id;
//                removeBook(id, books, noOfBooks);
//                break;
//            }
//            case 3: {
//                int id;
//                cout << "Enter Book ID to search: ";
//                cin >> id;
//                searchBook(id, books, noOfBooks);
//                break;
//            }
//            case 4:
//                displayBooks(books, noOfBooks);
//                break;
//            default:
//                cout << "Invalid input! Please try again.\n";
//        }
//    }
//}
//
//// Main function
//int main() {
//    int noOfBooks = 0;
//    Book* books = new Book[noOfBooks]; // Empty array initially
//    menu(books, noOfBooks);
//    return 0;
//}


//=======================

//#include <iostream>
//using namespace std;
//
//struct Book {
//	int bookID;
//	string title;
//	string author;
//	bool isAvailable;
//	
//	
//	Book () {}
//	
//	void add (int i, Book* books) {
//		
//		cout << "Enter BooK ID: ";
//		cin >> books[i].bookID;
//		cin.ignore(); // To clear the newline character
//
//		cout << "Enter Title: ";
//		getline (cin, books[i].title);
//		cout << "Enter author name: ";
//		getline (cin, books[i].author);
//		
//		cout << "Enter availability (Yes or No): ";
//        string availability;
//        cin >> availability;
//        books[i].isAvailable = (availability == "Yes" || availability == "yes");
//
//        cout << "Book added successfully!\n";
//		
//	}
//	
// 	void show(int i, Book* books) {
//        cout << "\nBook ID: " << books[i].bookID << endl;
//        cout << "Title: " << books[i].title << endl;
//        cout << "Author: " << books[i].author << endl;
//        cout << "Availability: " << (books[i].isAvailable ? "Yes" : "No") << endl;
//    }
//
//	
//};
//
//Book* memoryAllocation(int noOfBooks) {
//	return new Book[noOfBooks];
//} 
//
//    
//void remove(int id, Book* books, int &noOfBooks ) {
//        for (int i = 0; i < noOfBooks; i++) {
//        	if(books[i].bookID == id) {
//        		
//        		for (int j = i; j < noOfBooks - 1; j++){
//        			books[j] = books[j+1];
//				}
//				noOfBooks--;
//        		
//        		cout << "Book Removed Successfully!" << endl;
//        		return;
//			}	
//		}
//		cout << "No Book found with ID: "<< id << endl;
//    }
//
////void menu(Book* books) {
////	
////	int select;
////	cout << "Select from following: " << endl;
////	cout << "0. Exit\n";
////	cout << "1. Add a Book\n";
////	cout << "2. Remove a Book\n";
////	cout << "3. Search a Book\n"; 
////	cin >> select;
////	
////	switch (select) {
////		
////		case 0:
////			exit(1);
////			break;
////		case 1:
////			books.add();
////			break;
////		case 2:
////			books.remove();
////			break;
////		case 3:
////			books.search();
////			break;
////		default: 
////			cout << "Invalid input!" << endl;
////		
////	}
////	
////}
//
//int main() {
//	
//	int noOfBooks;
//	cout << "Enter no of Books: ";
//	cin >> noOfBooks;
//	
//	int i = 0;
//	
//	Book* books = memoryAllocation(noOfBooks);
//	
//	for (int i = 0; i < noOfBooks; i++) {
//		books[i].add(i,books);
//	}
//	
//	for (int i = 0; i < noOfBooks; i++) {
//		books[i].show(i,books);
//	} 
//	
//	int id;
//	cout << "\nEnter Book ID to remove: ";
//	cin >> id; 
//
//    remove(id, books, noOfBooks);
//    
//    for (int i = 0; i < noOfBooks; i++) {
//		books[i].show(i,books);
//	} 
//	
//	delete[] books;
//	
//	return 0;
//}

//-----------------------------------------------------------------
//Task 5: Dynamic String Manipulation
 
//#include <iostream>
//using namespace std;
//
//char* allocateMemory(int size) {
//    return new char[size + 1]; // +1 for null terminator
//}
//
//// Function to input a string dynamically
//void inputString(char* str, int size) {
//    cout << "Enter a string (max " << size << " characters): ";
//    cin.ignore(); // Clear newline from previous input
//    cin.getline(str, size + 1);
//}
//
//// Function to concatenate two strings
//void concatenateStrings(const char* str1, const char* str2, char* result) {
//    int i = 0;
//    while (str1[i] != '\0') {
//        result[i] = str1[i];
//        i++;
//    }
//    
//    int j = 0;
//    while (str2[j] != '\0') {
//        result[i] = str2[j];
//        i++;
//        j++;
//    }
//
//    result[i] = '\0'; // Null-terminate the concatenated string
//}
//
//// Function to compare two strings
//int compareStrings(const char* str1, const char* str2) {
//    int i = 0;
//    while (str1[i] != '\0' && str2[i] != '\0') {
//        if (str1[i] != str2[i])
//            return str1[i] - str2[i]; // Return difference in ASCII values
//        i++;
//    }
//    return str1[i] - str2[i]; // Compare lengths if one string is longer
//}
//
//// Function to find length of a string
//int stringLength(const char* str) {
//    int length = 0;
//    while (str[length] != '\0') {
//        length++;
//    }
//    return length;
//}
//
//int main() {
//    int size1, size2;
//
//    cout << "Enter size for the first string: ";
//    cin >> size1;
//    cout << "Enter size for the second string: ";
//    cin >> size2;
//
//    char* str1 = allocateMemory(size1);
//    char* str2 = allocateMemory(size2);
//    char* concatResult = allocateMemory(size1 + size2); // Allocate memory for concatenation
//
//    inputString(str1, size1);
//    inputString(str2, size2);
//
//    // Perform string operations
//    cout << "\nPerforming Operations...\n";
//    
//    // Length of Strings
//    cout << "Length of First String: " << stringLength(str1) << endl;
//    cout << "Length of Second String: " << stringLength(str2) << endl;
//
//    // String Concatenation
//    concatenateStrings(str1, str2, concatResult);
//    cout << "Concatenated String: " << concatResult << endl;
//
//    // String Comparison
//    int cmpResult = compareStrings(str1, str2);
//    if (cmpResult == 0) {
//        cout << "Both strings are equal." << endl;
//    } else if (cmpResult > 0) {
//        cout << "First string is greater than second string." << endl;
//    } else {
//        cout << "First string is smaller than second string." << endl;
//    }
//
//    // Free allocated memory
//    delete[] str1;
//    delete[] str2;
//    delete[] concatResult;
//
//    return 0;
//}

 //-----------------------------------------------------------------
//Task 5: Dynamic String Manipulation
 
 
// #include <iostream>
// using namespace std;
//
// char* allocateMemory(int size) {
//     return new char[size + 1];  // +1 for null terminator
// }
//
// void input(char* ptr, int size) {
//     cout << "Enter string (max " << size << " characters): ";
//     cin.ignore();   
//    cin.getline(ptr, size + 1);
// }
//
// void concatenate( const char* ptr1, const char* ptr2, char* result ) {
//     int i = 0;
//     for (i = 0; ptr1[i] != '\0'; i++) {
//         result[i] = ptr1[i];
//     }
//
//     for (int j = 0; ptr1[i] != '\0'; j++, i++) {
//         result[i] = ptr2[j];
//     }
//
//     result[i] = '\0';  // Null terminate the concatenated string
//
//     cout << "\nConcatenated String: ";
//     for (int i = 0; result[i] != '\0'; i++) {
//         cout << result[i];
//     }
// }
//
// int main() {
// 	
//     int size1, size2;
//
//     cout << "Enter size of first string: ";
//     cin >> size1;
//     
//     cout << "Enter size of second string: ";
//     cin >> size2;
//     
//    // Ensure valid size
//    if (size1 < 0 || size2 < 0) {
//        cout << "Invalid size! Exiting...\n";
//        return 1;
//    }
//     
//     char* s1 = allocateMemory(size1);
//     char* s2 = allocateMemory(size2);
//     char* concat = allocateMemory(size1 + size2);
// 
//
//     input(s1, size1);
//     input(s2, size2);
//
//     concatenate(s1, s2, concat); 
//
//     delete[] s1;
//     delete[] s2;
//     delete[] concat;
//
//     return 0;
// }



//----------------------------------------------------------------------------------

// #include <iostream>
// using namespace std;

// char* allocateMemory(int size) {
//     return new char[size + 1];  // +1 for null terminator
// }

// void input(char* ptr, int size) {
//     cout << "Enter string (max " << size << " characters): ";
//     cin.ignore();  // Clear the newline left in the input buffer after cin >> size
//     cin.getline(ptr, size + 1);  // Read input including spaces
// }

// int getLength(char* ptr) {
//     int length = 0;
//     while (ptr[length] != '\0') {  // Find the length by checking for null terminator
//         length++;
//     }
//     return length;
// }

// void concatenate(char* ptr1, char* ptr2, char* result, int size1, int size2) {
//     int i = 0;
//     for (i = 0; i < size1; i++) {
//         result[i] = ptr1[i];  // Copy the first string into result
//     }

//     for (int j = 0; j < size2; j++, i++) {
//         result[i] = ptr2[j];  // Copy the second string into result
//     }

//     result[i] = '\0';  // Null terminate the concatenated string
// }

// int compareStrings(char* ptr1, char* ptr2) {
//     int i = 0;
//     while (ptr1[i] != '\0' && ptr2[i] != '\0') {
//         if (ptr1[i] != ptr2[i]) {
//             return 0;  // Strings are not equal
//         }
//         i++;
//     }
//     return (ptr1[i] == ptr2[i]);  // Return true if both strings end at the same time
// }

// int main() {
//     int size1, size2;

//     // Input size of the first string
//     cout << "Enter size of first string: ";
//     cin >> size1;
//     char* s1 = allocateMemory(size1);

//     // Input size of the second string
//     cout << "Enter size of second string: ";
//     cin >> size2;
//     char* s2 = allocateMemory(size2);

//     // Dynamically allocate memory for the concatenated string
//     char* concat = allocateMemory(size1 + size2);

//     // Take input strings
//     input(s1, size1);
//     input(s2, size2);

//     // Perform string operations
//     int length1 = getLength(s1);
//     int length2 = getLength(s2);

//     cout << "\nLength of first string: " << length1 << endl;
//     cout << "Length of second string: " << length2 << endl;

//     concatenate(s1, s2, concat, length1, length2);
//     cout << "\nConcatenated string: " << concat << endl;

//     // Compare strings
//     if (compareStrings(s1, s2)) {
//         cout << "\nBoth strings are equal." << endl;
//     } else {
//         cout << "\nStrings are not equal." << endl;
//     }

//     // Deallocate memory
//     delete[] s1;
//     delete[] s2;
//     delete[] concat;

//     return 0;
// }


//----------------------------------------------------------------------------------
 
 


//-----------------------------------------------------------------
//Task 4: Student Grade Calculator 
//#include <iostream>
//using namespace std;
//
//struct Student {
//	string name;
//	int rollNumber;
//	double marks[5];
//	double average;
//	string grade;
//	
//};
//
//Student* memoryAllocation(int noOfStudents){
//	return new Student[noOfStudents];
//}
//
//void input(Student* student, int noOfStudents) {
//	
//	for(int i = 0; i < noOfStudents; i++) {
//		cout << endl;
//		cout << "Student " << i+1 << " : " << endl;
//		cout << "Enter Name: ";
//		cin >> student[i].name;
//		cout << "Enter Roll Number: ";
//		cin >> student[i].rollNumber;
//		cout << "Enter Marks of 5 subjects: " << endl;
//		for (int j = 0; j < 5; j++) {
//			cout << "Subject " << j+1 << " : ";
//			cin >> student[i].marks[j];
//		}
//		
//	}
//	cout << endl;
//	
//}
//
//void display(Student* student, int noOfStudents) {
//	
//	
//	for(int i = 0; i < noOfStudents; i++) {
//		cout << endl;
//		cout << "Student " << i+1 << " : " << endl;
//		cout << "Name: "<< student[i].name << endl;
//		cout << "Roll Number: "<< student[i].rollNumber << endl;
//		cout << "Marks: " << endl;
//		cout << "Subject Marks: ";
//		for (int j = 0; j < 5; j++) {
//			cout << student[i].marks[j] << " ";
//		}
//		cout << "\nAverage: " << student[i].average << endl;
//		cout << "Grade: " << student[i].grade << endl;
//	}
//	cout << endl;
//	
//}
//
//void calculateResults(Student* student, int noOfStudents) {
//	
//	
//	
//	for(int i = 0; i < noOfStudents; i++) {
//		double sum = 0.0;
//		double avg = 0.0;
//		double percent = 0.0;
//		for (int j = 0; j < 5; j++) {
//			sum += student[i].marks[j];
//		}
//		avg = sum/5.0;
//		percent = (sum/500.0)*100;
//		if (percent >= 86 && percent <= 100) {
//			student[i].grade = "A";
//		}
//		else if (percent >= 82 && percent < 86) {
//			student[i].grade = "A-";
//		}
//		else if (percent >= 78 && percent < 82) {
//			student[i].grade = "B+";
//		}
//		else if (percent >= 74 && percent < 78) {
//			student[i].grade = "B";
//		}
//		else if (percent >= 70 && percent < 74) {
//			student[i].grade = "B-";
//		}
//		else if (percent >= 66 && percent < 70) {
//			student[i].grade = "C+";
//		}
//		else if (percent >= 62 && percent < 66) {
//			student[i].grade = "C-";
//		}
//		else if (percent >= 58 && percent < 62) {
//			student[i].grade = "D+";
//		}
//		else if (percent >= 54 && percent < 58) {
//			student[i].grade = "D";
//		}
//		else {
//			student[i].grade = "F";
//		}
//		
//		student[i].average = avg;
//	}	
//}
//
//
//int main() {
//	
//	int noOfStudents;
//	cout << "Enter No of Students: ";
//	cin >> noOfStudents; 
//	
//	Student* student = memoryAllocation(noOfStudents);
//	
//	input(student, noOfStudents);
//	
//	calculateResults(student, noOfStudents);
//	
//	display(student, noOfStudents);
//	
//	delete[] student; // Free allocated memory
//	
//	return 0;
//}



//-----------------------------------------------------------------
// Task 3: Employee Managment System

//#include <iostream>
//using namespace std;
//
//// 1. Define a structure Employee with field like employeeID, name, department, and salary. 
//struct Employee {
//	
//	// Variables
//	int employeeID;
//	string name;
//	string department;
//	double salary;
//	
//	Employee () {};	
//	
//	// Constructor
//	Employee (int employeeID, string name, string department, double salary) {
//		this -> employeeID = employeeID;
//		this -> name = name;
//		this -> department = department;
//		this -> salary = salary;		
//	}
//
//};
//
//// 3. Store the employees in a dynamically allocated array. 
//Employee* allocateMemory( int noOfEmployees) {  
//    return new Employee[noOfEmployees];
//}
//
//// 2. Allow the user to input details for multiple employees. 
//void inputDetails (Employee* employee, int noOfEmployees) {
//	
//	for (int i = 0; i < noOfEmployees; i++) {
//		cout << "\nInput Details for Employee "<< i+1 << ": \n";
//		
//		cout << "Employee ID: " ;
//		cin >> employee[i].employeeID;
//		cout << "Name: " ;
//		cin.ignore();
//        getline(cin, employee[i].name);
//		cout << "Department: " ; 
//		getline(cin,employee[i].department); 
//		cout << "Salary: " ;
//		cin >> employee[i].salary;
//	}
//	
//}
//
//// 4. Display all employees 
//void outputDetails (Employee* employee, int noOfEmployees) {
//	
//	for (int i = 0; i < noOfEmployees; i++) {
//		cout << "\nEmployee "<< 1+i << ": \n";
//		
//		cout << "Employee ID: " << employee[i].employeeID << endl; 
//		cout << "Name: " << employee[i].name << endl; 
//		cout << "Department: " << employee[i].department << endl;  
//		cout << "Salary: " << employee[i].salary << endl; 
//		
//	}
//}
//
//// 4. and allow searching by employeeID. 
//void searchEmployee (Employee* employee, int noOfEmployees, int empID) {
//	
//	bool found = false;
//	for (int i = 0; i < noOfEmployees; i++) {
//		if (employee[i].employeeID == empID) {
//			cout << "\nEmployee "<< 1+i << ": \n";
//			cout << "Employee ID: " << employee[i].employeeID << endl; 
//			cout << "Name: " << employee[i].name << endl; 
//			cout << "Department: " << employee[i].department << endl;  
//			cout << "Salary: " << employee[i].salary << endl; 
//			found = true;
//			
//		}	
//	}
//	
//	if (!found) {
//    cout << "No employee found with ID: " << empID << endl;
//}
//	
//}
//
//// 5. Deallocate memory after use. 
//void deallocateMemory(Employee* employee, int noOfEmployees) {
//        delete[] employee;  
//}
//
//
//int main() {
//	
//	int noOfEmployees, searchID;
//	cout << "Enter No of Employees: ";
//	cin >> noOfEmployees; 
//	
//	Employee* employee = allocateMemory(noOfEmployees);
//	
//	
//	cout << "-----------------------------------------------------------\n";
//	cout << "Input details for " << noOfEmployees << " employees: \n";
//	cout << "-----------------------------------------------------------\n";
//	inputDetails(employee, noOfEmployees);
//	
//	cout << endl;
//	cout << "-----------------------------------------------------------\n";
//	cout << "Details of all " << noOfEmployees << " employees: \n";
//	cout << "-----------------------------------------------------------\n";
//	outputDetails(employee, noOfEmployees); 
//	
//	cout << endl;
//	cout << "-----------------------------------------------------------\n";
//	cout << "Search Employee: \n";
//	cout << "-----------------------------------------------------------\n";
//	cout << "Enter Employee ID: ";
//	cin >> searchID;
//	searchEmployee (employee, noOfEmployees, searchID);
//	
//	cout << "-----------------------------------------------------------\n";
//	
//	deallocateMemory(employee,noOfEmployees); 
//	
//	return 0;
//}

//-----------------------------------------------------------------
// Task 2: 2D Matrix Operation
//#include <iostream>
//using namespace std;
//
//int** memoryAllocation(int rows, int cols) {
//    int** arr = new int*[rows];
//    for (int i = 0; i < rows; i++) {
//        arr[i] = new int[cols];
//    }
//    return arr;
//}
//
//void inputElements(int** arr, int rows, int cols) {
//    for (int i = 0; i < rows; i++) {
//        cout << "Input elements for row " << i + 1 << ":" << endl;
//        for (int j = 0; j < cols; j++) {
//            cout << "Element [" << i + 1 << "][" << j + 1 << "]: ";
//            cin >> arr[i][j];
//        }
//    }
//}
//
//void outputElements(int** arr, int rows, int cols) {
//    cout << "Matrix:" << endl;
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//            cout << arr[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//
//void deallocateMemory(int** ptr, int rows) {
//    for (int i = 0; i < rows; i++) {
//        delete[] ptr[i];
//    }
//    delete[] ptr;
//}
//
//void matrixOpr(int** arr1, int** arr2, int** resultAdd, int** resultSubtract, int** resultMultiply, int rows1, int rows2, int cols1, int cols2) {
//    if (rows1 == rows2 && cols1 == cols2) {
//        // Addition
//        cout << "Performing Matrix Addition..." << endl;
//        for (int i = 0; i < rows1; i++) {
//            for (int j = 0; j < cols1; j++) {
//                resultAdd[i][j] = arr1[i][j] + arr2[i][j];
//            }
//        }
//        outputElements(resultAdd, rows1, cols1);
//    } else {
//        cout << "Matrix Addition not possible due to mismatched dimensions." << endl;
//    }
//    
//    
//    if (rows1 == rows2 && cols1 == cols2) {
//        // Addition
//        cout << "Performing Matrix Subtraction..." << endl;
//        for (int i = 0; i < rows1; i++) {
//            for (int j = 0; j < cols1; j++) {
//                resultSubtract[i][j] = arr1[i][j] - arr2[i][j];
//            }
//        }
//        outputElements(resultSubtract, rows1, cols1);
//    } else {
//        cout << "Matrix Subtraction not possible due to mismatched dimensions." << endl;
//    }
//    
//
//    if (cols1 == rows2) {
//        // Multiplication
//        cout << "Performing Matrix Multiplication..." << endl;
//        for (int i = 0; i < rows1; i++) {
//            for (int j = 0; j < cols2; j++) {
//                resultMultiply[i][j] = 0;
//                for (int k = 0; k < cols1; k++) {
//                    resultMultiply[i][j] += arr1[i][k] * arr2[k][j];
//                }
//            }
//        }
//        outputElements(resultMultiply, rows1, cols2);
//    } else {
//        cout << "Matrix Multiplication not possible due to mismatched dimensions." << endl;
//    }
//}
//
//int main() {
//    int rows1, cols1, rows2, cols2;
//
//    // Input matrix dimensions
//    cout << "Input the number of rows for matrix 1: ";
//    cin >> rows1;
//    cout << "Input the number of cols for matrix 1: ";
//    cin >> cols1;
//
//    cout << "Input the number of rows for matrix 2: ";
//    cin >> rows2;
//    cout << "Input the number of cols for matrix 2: ";
//    cin >> cols2;
//
//    // Allocate memory
//    int** matrix1 = memoryAllocation(rows1, cols1);
//    int** matrix2 = memoryAllocation(rows2, cols2);
//    int** resultAdd = memoryAllocation(rows1, cols1); // Addition result
//    int** resultMultiply = memoryAllocation(rows1, cols2); // Multiplication result
//    int** resultSubtract = memoryAllocation(rows1, cols1); // Subtraction result
//
//    // Input elements
//    cout << "Input elements for Matrix 1:" << endl;
//    inputElements(matrix1, rows1, cols1);
//    cout << "Input elements for Matrix 2:" << endl;
//    inputElements(matrix2, rows2, cols2);
//
//    // Output matrices
//    cout << "Matrix 1:" << endl;
//    outputElements(matrix1, rows1, cols1);
//    cout << "Matrix 2:" << endl;
//    outputElements(matrix2, rows2, cols2);
//
//    // Perform operations
//    matrixOpr(matrix1, matrix2, resultAdd, resultMultiply, resultSubtract, rows1, rows2, cols1, cols2);
//
//    // Deallocate memory
//    deallocateMemory(matrix1, rows1);
//    deallocateMemory(matrix2, rows2);
//    deallocateMemory(resultAdd, rows1);
//    deallocateMemory(resultMultiply, rows1);
//    deallocateMemory(resultSubtract, rows1);
//
//    return 0;
//}

 
//-----------------------------------------------------------------
// Task 1: Dynamic Array Manipulation
//#include <iostream>
//using namespace std;
//
//int* memoryAllocation(int size) {
//	int* arr = new int[size];
//	return arr;
//}
//
//void inputElements (int* arr, int size) {
//	cout << "Input Array Elements: " << endl;
//	for (int i = 0; i < size; i++) {
//		cout << "Element " << i+1 << ": ";
//		cin >> *(arr+i);
//	}
//}
//
//void displaySumAvgMax (int* arr, int size) {
//	double sum = 0;
//	double avg = 0;
//	int max = *arr;
//
//	for (int i = 0; i < size; i++) {
//		if (max < *(arr+i)) {
//			max = *(arr+i);
//		}
//		sum += *(arr+i);
//	}
//	avg = sum/size;
//	
//	cout << "Sum of Array Elements: " << sum << endl;
//	cout << "Average of Array Elements: " << avg << endl;
//	cout << "Maximum Array Elements: " << max << endl;
//	
//}
//
//int main() {
//	
//	// 1. Allow the user to input the size of the array.
//	int size;
//	cout << "Input the size of array: ";
//	cin >> size;
//	
//	// 2. Dynamically allocate memory for the array.
//	int *array = memoryAllocation(size);
//	
//	// 3. Populate the array with user input.
//	inputElements(array, size);
//	
//	// 4. Find and display the sum, average, and maximum value in the array.
//	displaySumAvgMax (array, size);
//	
//	// 5. Deallocate the memory after use.
//	delete array;
//	
//	return 0;
//}



//==============================Pointer Arithmatic==================================
//#include <iostream>
//using namespace std;
//
//// Function to allocate memory for a 2D array
//int** allocateMemory(int rows, int cols) {
//    int **ptr = new int*[rows];
//    for (int i = 0; i < rows; i++) {
//        ptr[i] = new int[cols]; // Allocate memory for each row
//    }
//    return ptr;
//}
//
//// Function to take input for the 2D array
//void arrayInput(int **ptr, int rows, int cols) {
//    cout << "Enter elements of " << rows << " x " << cols << " array: " << endl;
//    for (int i = 0; i < rows; i++) {
//        cout << "Enter elements for row " << i + 1 << ": "<<endl;
//        for (int j = 0; j < cols; j++) {
//            cout << "Enter elements for row " << i + 1 << " coloumn " << j + 1 << ": ";
//            cin >> ptr[i][j]; // OR use *(*(ptr + i) + j)
//        }
//    }
//}
//
//// Function to display the 2D array
//void arrayOutput(int **ptr, int rows, int cols) {
//    cout << "The elements of the array are: " << endl;
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//            cout <<*(ptr[i]+j)<<" "; // OR use *(*(ptr + i) + j)
//        }
//        cout << endl;
//    }
//}
//
//// Function to deallocate memory
//void deallocateMemory(int **ptr, int rows) {
//    for (int i = 0; i < rows; i++) {
//        delete[] ptr[i];  
//    }
//    delete[] ptr; 
//}
//
//int main() {
//    int rows, cols;
//    cout << "Enter the number of rows: ";
//    cin >> rows;
//
//    cout << "Enter the number of cols: ";
//    cin >> cols;
// 
//    int **ptr = allocateMemory(rows, cols);
// 
//    arrayInput(ptr, rows, cols);
// 
//    arrayOutput(ptr, rows, cols);
// 
//    deallocateMemory(ptr, rows);
//
//    return 0;
//}
