#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<char> s;
    int tst;
    cin >> tst;
    int b,h,c;
    for (int i = 0; i < tst; i++){
        cin >>b>>h>>c;
        int ch =c+h;
        for (int j = 0; j < b; j++){
            if(b!=0){
                s.push('b');b--;
                s.push('h');ch --;
                s.push('b');b--;
            }
            if(b==0) {
                cout<<s.size();
                break;
            }
            if(ch==0){
                cout<<s.size();
                break;
            }
        }
        
    }
    


    return 0;
}