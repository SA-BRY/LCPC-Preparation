#include<iostream>
using namespace std;

int main(){
    int a = 5, b = 3;
    cout << "a and b before swapping:\n a: " << a << "\n b: " << b << endl;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << "a and b after swapping:\n a: " << a << "\n b: " << b << endl;
    return 0;
}
