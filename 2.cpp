// Create a University class with 5 member variables and 2 member functions(getData() and displayData() ). Then make an array of 3 University objects and use
// two functions to get information and show information.

#include<iostream>
using namespace std;

class University {
private:
  string name;
  string address;
  int established;
  int teacher;
  int student;

public:
  void getData() {
    
    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter Address: ";
    cin.ignore();
    getline(cin, address);
    cout << "Enter Established Year: ";
    cin >> established;
    cout << "Enter Teacher Number: ";
    cin >> teacher;
    cout << "Enter Student Number: ";
    cin >> student;
  }

  void displayData() {
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "Established Year: " << established << endl;
    cout << "Teacher Number: " << teacher << endl;
    cout << "Student Number: " << student << endl;
  }
};

int main() {
  University arr[3];

  for (int i = 0; i < 3; i++) {
    arr[i].getData();
    arr[i].displayData();
  }

  return 0;
}