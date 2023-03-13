// Create a class called Reverse. This class must include one integer variable, one getInput() function, and one doReverse() function. Your task is to take
// an integer input from the keyboard and reverse it.

#include<iostream>
using namespace std;

class Reverse {
private:
  int num;

public:
  void getInput() {
    cout << "Enter the number: ";
    cin >> num;
  }

  int doReverse() {
    int n = num;
    int rev = 0;
    while (n) {
      rev = (rev * 10) + n % 10;
      n /= 10;
    }

    return rev;
  }
};

int main() {
  Reverse num;
  num.getInput();
  
  cout << "Reversed Number: " << num.doReverse() << endl;

  return 0;
}