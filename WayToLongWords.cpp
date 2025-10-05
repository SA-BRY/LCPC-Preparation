#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string word;
    while(n--){
        cin>>word;
        if (word.size()<10)cout<<word;
        else cout<<word[0]+to_string(word.size()-2)+word[word.size()-1]<<endl;
    }
    return 0;
}