#include<iostream>
using namespace std;
int main(){

    int t;
    cin >> t;
    while (t--)
    {
        int a1,a2,b1,b2;
        cin >> a1 >> a2 >> b1 >> b2;
        if(a1 + a2 > b1 + b2){
            if(a1 == a2){
                cout << 4 << "\n";
            } else cout << 2 << "\n";
        } else {
            cout << 0 << "\n";
        }
    }
}