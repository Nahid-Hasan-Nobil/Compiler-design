#include <iostream>
using namespace std;

bool isNumericConstant(string value) {

    if(value.empty()) return false;


    if(value[0] == '-') {

        for (int i = 1; i < value.length(); i++) {
            char c = value[i];
            if (!isdigit(c)) {
                return false;
            }
        }
    }

    else if(value[0] == '.'){

        for (int i = 1; i < value.length(); i++) {
            char c = value[i];
            if (!isdigit(c)) {
                return false;
            }
        }
    }

    else {

        for (int i = 0; i < value.length(); i++) {
            char c = value[i];
            if (!isdigit(c)) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    while (true) {
        string value;
        cout << "Enter input: ";
        cin >> value;

        if (isNumericConstant(value)) {
            cout << "Numeric constant" << endl;
        } else {
            cout << "Not numeric" << endl;
        }
        cout << endl;
    }
    return 0;
}
