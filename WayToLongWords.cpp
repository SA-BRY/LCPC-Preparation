#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string word;
    for (int i = 0; i < n; i++){

        cin>>word;
        if (word.size()<10)cout<<word;
        else cout<<word[0]<<word.size()-2<<word[word.size()-1];
    }
    



    return 0;
}