#include <iostream>
using namespace std;

    bool isOperator(char c) {
        return (c == '+' || c == '-' || c == '*' || c == '/' || c == '%'|| c == '=');
    }

    int main() {

        while(1){

            string value;

            cout << "Enter input: ";
            cin >> value;



             char c;

            cout << "Operators found in the input:" << endl;

            for (int i; i<value.length();i++) {
                     c =value[i];
                if (isOperator(c)) {

                    cout << "Operator: " << c << endl;
                }
            }
             if(c==NULL){

                cout<<endl<<endl<<"!!!!no operator found!!!!"<<endl<<endl<<endl;
            }
        }

        return 0;
}
