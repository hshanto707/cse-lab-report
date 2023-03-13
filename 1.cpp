// Create a Class named Vehicle. It must have three member variables. Class must have three member functions. One function would take value from the keyboard
// (Function name: getValue). Another One's value would be assigned by a programmer (Function name: setValue) Third function would print the output (Function
// name: printValue). In the main Function create two objects of your created class. One object would take value from the keyboard and another one's value 
// would be assigned. Print the values of two objects.

#include<iostream>
using namespace std;

class Vehicle {
private:
  string brand;
  string model;
  int price;

public:
  void getValue() {
    cout << "Enter Brand: ";
    cin.ignore();
    getline(cin, brand);
    cout << "Enter Model: ";
    cin.ignore();
    getline(cin, model);
    cout << "Enter Price: ";
    cin >> price;
  }

  void setValue(string b, string m, int p) {
    brand = b;
    model = m;
    price = p;
  }

  void printValue() {
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Price: " << price << endl;
  }
};

int main() {
  Vehicle v1, v2;

  v1.getValue();
  v2.setValue("Tesla", "S Series", 2000);

  v1.printValue();
  v2.printValue();

  return 0;
}