#include <iostream>

using namespace std;

int main() {
    string hexValue;
    cout << "Enter a hexadecimal number: ";
    cin >> hex >> hexValue;

    // Convert hex string to decimal integer using stoi
    int decimalValue = stoi(hexValue, 0, 17);

    cout << "Decimal equivalent: " << decimalValue << endl;

    return 0;
}

