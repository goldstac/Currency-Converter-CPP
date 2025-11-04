#include <iostream>
using namespace std;
int main() {
int choice;
float converter;
float calculate;
cout << "Welcome To Currency Converter\n";
cout << "Options\n";
cout << "1 : USD - AED\n";
cout << "2 : USD - CAD\n";
cout << "3 : USD - GBP\n";
cout << "Choose Option\n";
cin >> choice;
if (choice == 1) {
    cout << "Enter AMT:\n";
    cin >> converter;
    calculate = converter * 3.67;
     cout << calculate;
}
else if (choice == 2) {
    cout << "Enter AMT:\n";
    cin >> converter;
    calculate = converter * 1.41;
      cout << calculate;
}
else if (choice == 3) {
    cout << "Enter AMT:\n";
    cin >> converter;
    calculate = converter * 0.77;
    cout << calculate;
}
else{
    cout << "Number Not Found";
}
}
