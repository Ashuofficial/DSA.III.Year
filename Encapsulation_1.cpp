
#include <iostream>
using namespace std;

class Student {
private:
    // Private data (cannot be accessed directly from outside)
    string name;
    int age;

public:
    // Setter functions (to set private values safely)
    void setName(string studentName) {
        name = studentName;
    }

    void setAge(int studentAge) {
        if(studentAge > 0) {  // validation
            age = studentAge;
        } else {
            cout << "Invalid Age!" << endl;
        }
    }

    // Getter functions (to access private values safely)
    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }
};

int main() {
    Student s1;

    // Setting values using setters (not directly!)
    s1.setName("Ashok");
    s1.setAge(22);

    // Getting values using getters
    cout << "Student Name: " << s1.getName() << endl;
    cout << "Student Age: " << s1.getAge() << endl;

    return 0;
}
