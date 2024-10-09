#include <iostream>

using namespace std;


int main() {

    int choice;
    double temp, converted_temp;

    cout << "Do you want to pick (1)Celsius to Fahrenheit or (2)Fahrenheit to Celsius, Pick  1 or 2 \n";
    cin  >> choice;

    if (choice == 1) {
        cout << "Enter the Temperature in Celsius:  \n";
        cin >> temp;
        converted_temp = temp * (9.0/5.0) + 32;
        cout << "The convert Temperature to Fahrenheit is: " << converted_temp << " \n";
    }

    else if (choice == 2) {
        cout << "Enter the Temperature in Fahrenheit:  \n";
        cin  >> temp;
        converted_temp = (temp - 32) * (5.0/9.0);
        cout << "The convert Temperature to Celsius is: " << converted_temp << " \n";
    }
    else {
        cout << "Invalid Choice!!! \n";
    }
    return 0;
}