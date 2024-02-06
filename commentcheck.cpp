#include <iostream>
using namespace std;

bool singleComment(string s) {

    if (s.size() >= 2) {

        if (s.substr(0, 2) == "//") {
            return true;
        }

        /*
        else if(s.substr(s.size() - 2, 2) == ""){

            return true;
        }
        */

    }
    return false;
}
bool multicomment(string s){

     if (s.size() >= 2) {


        if (s.substr(0, 2) == "/*"  &&  s.substr(s.size() - 2, 2) == "*/" ) {
            return true;
        }


    }
    return false;



}

bool startcomment(string s){

     if (s.size() >= 2) {


        if (s.substr(s.size() - 2, 2) == "/*" ) {
            return true;
        }


    }
    return false;

}

bool endcomment(string s){

     if (s.size() >= 2) {


        if (s.substr(s.size() - 2, 2) == "*/" ) {
            return true;
        }


    }
    return false;
}

int main() {
    while(1){

        string s;

        cout << "Enter input: ";
        getline(cin, s);

        if (singleComment(s)) {
            cout << "Input is a single line comment" << endl;
        }
        else if(multicomment(s)){

            cout<<" Input is a multi line comment"<<endl;
        }
        else if(startcomment(s)){

            cout<<" comment will start after the '/*' sign "<<endl;
        }
        else if(endcomment(s)){

            cout<<" comment end after the '*/' sign "<<endl;
        }

        else {
            cout << "Input is not a comment" << endl;
        }
        cout<<endl;
    }

    return 0;
}
