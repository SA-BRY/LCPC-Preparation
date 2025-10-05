#include<iostream>
#include<string>
using namespace std;
int main(){

int t;
cin >> t;
while( t-- ){
    string n;
    cin >> n;
    int x = n[0] - '0' ,y = n[1] - '0';  
    cout << x+ y;

}


}