/* #include <iostream>
using namespace std;

class ShallowCopy { 

public:

    int* data = new int ;

    ShallowCopy(int d) {
        *data = d;
    }

    ShallowCopy(ShallowCopy &obj) {
        data = obj.data;
    }

    void display() {
        cout << "Value: " << *data << endl;

    }

   // ~ShallowCopy();

};

int main() {

    ShallowCopy c1(10);
    ShallowCopy c2(c1);

    c1.display();
    c2.display();

    return 0;
}

*/

/*
#include <iostream>
using namespace std;

class ShallowCopy { 

public:

    int* data = new int ;

    ShallowCopy(int d) {
        *data = d;
    }

    ShallowCopy(ShallowCopy *obj) {
        data = new int (*obj->data);
    }

    void display() {
        cout << "Value: " << *data << "\t Adress: " << data << endl;

    }

   // ~ShallowCopy();

};

int main() {

    ShallowCopy* s1 = new ShallowCopy(15);
    ShallowCopy s2 = s1;

    s1->display();
    s2.display();

    // ShallowCopy c1(10);
    // ShallowCopy c2(c1);
    // c1.display();
    // c2.display();

    return 0;
}
*/


#include <iostream>
using namespace std;

class ShallowCopy { 

public:

    int* data = new int ;

    ShallowCopy(int d) {
        *data = d;
    }

    ShallowCopy(ShallowCopy *obj) {
        // data = new int (*obj->data); // deep
        data =  obj->data; // Shallow

    }

    void display() {
        cout << "Value: " << *data << "\t Adress: " << data << endl;

    } 

};

int main() {

    ShallowCopy* s1 = new ShallowCopy(15);
    ShallowCopy s2 = s1;

    s1->display();
    s2.display();

    // ShallowCopy c1(10);
    // ShallowCopy c2(c1);
    // c1.display();
    // c2.display();

    return 0;
}
