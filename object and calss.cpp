#include <iostream>
#include <string>

using namespace std;
class Student {
public:
// Properties (data members)
string name;
int rollNumber;
int age;
// Function to display student information
void displayInfo() {
cout << "Name: " << name << endl;
cout << "Roll Number: " << rollNumber << endl;
cout << "Age: " << age << endl;
}
};
int main() {
// Create objects (instances) of the Student class
Student s1;
Student s2;
// Set properties for student1
s1.name = "Alice";
s1.rollNumber = 101;
s1.age = 20;
// Set properties for student2
s2.name = "Bob";
s2.rollNumber = 102;
s2.age = 22;
//Display information for each student 
cout<<"s1 Information:"<<endl;
s2.displayInfo();
cout<<endl;//for better readability
cout<<"s2 Informtion:"<<endl;
s2.displayInfo();
return 0;
}