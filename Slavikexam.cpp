#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
    string first,last;
    cin >> first >> last ;
    bool state = false;
    for (int i = 0; i < last.size() ; i++){
        for(int j = 0 ; j < first.size() ; j++){
            if (last[i]  != first[j]){
                if(first[i] == '?'){
                    first[i]=last[j];
                }
                else {
                    j--;
                state = false;
                };
            } 
            if(last[i]  == first[j]){
                state = true;
            }
        }   
    }
    for(auto c : first){
        if (c == '?'){
            c='a';
        }
    }

    if(state){
        cout << "YES" << endl << first << endl;
    }else cout <<"NO";


    }


}