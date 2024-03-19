#include<iostream>
using namespace std;

    bool indentifier(string s){

       char v0  = s[0];
      if(s.empty()){

          cout<< "0"<<endl<<"The identifier can't be empty."<<endl;
        return false;

      }
      else {
       if(v0=='0' || v0=='1' || v0 =='2' || v0=='3' || v0=='4' || v0=='5'|| v0=='6' || v0=='7' || v0=='8' || v0=='9'){

        cout<<"0"<<endl<<"The identifier name can't have number in the beginning."<<endl;
        return false;
       }
       else{

        for(int i=0; i<s.length(); i++){


           char c=s[i];

           if(c == '-' ||c=='{' || c=='}' || c=='[' || c==']' || c=='+'|| c=='*' || c=='/' || c=='%' || c=='$' || c=='&' || c=='^' || c=='@' || c==',' || c=='.' || c=='(' || c==')' || c=='"' || c==';' || c==':' || c=='|' || c=='=' || c=='!'|| c=='#'||c=='^'){

            cout<<"0"<<endl<<"The identifier can't have special character." <<endl;
              return false;
           }
           if (c==' '){

         // if(c==' '){

            cout<< "0"<<endl<<"The identifier can't have space."<<endl;
            return false;

           }
          else if(s == "int" || s=="double" || s=="long" || s=="bool" || s=="float" || s=="short" || s=="string" || s=="asm" || s=="new" || s=="" || s=="switch" || s=="auto" || s=="else" || s=="if" || s=="operator" || s=="template" || s=="break" || s=="enum" || s=="private" || s=="this" || s=="case" || s=="extern" || s=="protected" || s=="throw" || s=="catch" || s=="public" || s=="try" || s=="for" || s=="register" || s=="typedef" || s=="class" || s=="friend" || s=="return" || s=="union" || s=="const" || s=="short" || s=="unsigned" || s=="continue" || s=="signed" || s=="virtual" || s=="default" || s=="sizeof" || s=="void" || s=="delete" || s=="static" || s=="do" || s=="long" || s=="struct" || s=="while" || s=="inline" || s=="virtual" ){

            cout<<"0"<<endl<<"The identifier can not have "<<s<<" keyword."<<endl;
            return false;

          }


        }


            return true;



       }

       }


    }


    int main(){
       do{


        string value ;

        cout<< "Enter an identifier to verify: ";

        getline(cin, value);

        if(!indentifier(value))
        {
            cout<< " " <<endl;
        }
        else
        {
            cout<< "1 "<<endl;
            cout<<endl;
        }



        }
        while(1);

    return 0;

    }


