
#include<iostream>
#include<fstream>
using namespace std;

bool isIdentifier(string s)
{
    int j =0;
    int pos = 0;
    char c1 = s[0];
    int validity = 0;

    if(s.length()==0)
    {
        cout<< "String empty"<<endl;
        return false;
    }
    else
    {
        if(c1=='0' || c1=='1' || c1=='2' || c1=='3' || c1=='4' || c1=='5' || c1=='6' || c1 =='7' || c1=='8' || c1=='9')
        {
            cout<< "Identifiers cannot have numbers at the begining"<<endl;
            validity++;
        }
        else
        {
            for(int i = 0; i<s.length(); i++)
            {
                char c = s[i];
                if(c=='#' || c=='<' || c=='>' || c=='?' || c == '-' || c=='+'|| c=='*' || c=='/' || c=='%' || c=='$' || c=='&' || c=='^' || c=='@' || c==',' || c=='.' || c=='(' || c==')' || c=='"' || c==';' || c==':' || c=='|' || c=='=' || c=='!' || c=='`' || c=='[' || c==']' || c=='{' || c=='}' || c=='\\')
                {
                    cout<< "Error at index '" << i<<"'. Identifier cannot contain special character "<<c<<endl;
                    validity++;
                }
                if(c == ' ')
                {
                    cout<< "Error at index '" << i<<"'. Identifier cannot contain empty spaces"<<endl;
                    validity++;

                }
                if(s == "int" || s=="double" || s=="long" || s=="bool" || s=="float" || s=="short" || s=="string" || s=="if" || s=="else" || s=="asm" || s=="new" || s=="switch" || s=="case" || s=="auto" || s=="operator" || s=="template" || s=="break" || s=="enum" || s=="public" || s=="private" || s=="this" || s=="protected" || s=="for" || s=="do" || s=="while" || s=="static" || s=="try" || s=="catch" || s=="throw" || s=="sizeof" || s=="virtual" || s=="const" || s=="void" || s=="signed" || s=="default" || s=="continue" || s=="goto" || s=="unsigned" || s=="return" || s=="char" || s=="extern" || s=="enum" || s=="struct" || s=="friend" || s=="inline" || s=="volatile" || s=="class" || s=="register" || s=="typedef" || s=="union")
                {
                    cout<< "Identifier cannot be a keyword"<<endl;
                    validity++;
                    break;
                }
            }
        }
    }

    if(validity == 0)
    {
        cout<< "Valid identifier"<<endl;
        return true;
    }
    else return false;

}

int main()
{
    //int i=1;
    //while(i<4)

        string s;
        ifstream MyReadFile("data.txt");
        //cout<< "Enter an identifier: ";
        getline(MyReadFile, s);
        cout<<isIdentifier(s)<<endl<<endl;

    return 0;
}
