#include <iostream>
#include<cctype>
using namespace std;
int main()
{

    string s = "hello";

    cout << s[0] << "\n"; // h

    cout << s.length() << "\n"; // 5

    s += " world"; // concatenating

    cout << s << "\n"; // hello world

    cout << s.length() << "\n"; // string length includes spaces=> 11

    cout << s.substr(6, 6) << "\n"; // s.substr(pos, len)

    cout << s.find("e") << "\n"; // returns the index

    cout << s.rfind("o") << "\n"; // returns the index

    s.insert(6, "my "); // s.insert(pos, str)

    cout << s << "\n"; // hello my world

    s.erase(0, 5); // s.erase(pos, len)

    cout << s << "\n"; // my world

//    reverse(s.begin(), s.end()); // to reverse a string
    cout << s;

    for (int i = s.length() - 1; i >= 0; i--) // to reverse a string manually
        cout << s[i];


cout<<"\n";

    string a = "code";
    string b = "code";

    if (a == b)
        cout << "equal";


cout<<"\n";
    // string::npos stands for "not found"
    if (s.find("abc") != string::npos) {
        cout << "Found" << "\n";
    }
    else
    {
        cout << "Not found" << "\n";
    }


//characters
char u = 'a';
char l = 'B';


cout<< isalpha(s[3])<<"\n";//returns boolean
cout<< isdigit(s[3])<<"\n";//returns boolean
cout<< isupper(s[3])<<"\n";//returns boolean
cout<< islower(s[3])<<"\n";//returns boolean

char Up=toupper(u);//puts character in uppercase
char Low=tolower(l);//puts craracter in lowercase

cout<<Up<<"\n";
cout<<Low<<"\n";



    return 0;
}
