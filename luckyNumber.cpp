#include<iostream>
using namespace std;

int main(){
int num;
cin>>num;

    string s =to_string(num);
    bool state=true;
    for (char c:s){
        if (c!='4'&&c!='7'){
            state = false;
            break;
        } 
    }
    if(state||num%7==0||num%4==0){
                cout<<"YES";
            }
            else {
                cout<<"NO";
            }
}