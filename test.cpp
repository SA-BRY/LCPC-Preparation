#include<iostream>
using namespace std;
int main(){
string sum;

cin>>sum;

int min = 0;
char temp;

for (int i = 0; i < sum.size(); i+=2){
    min =  i;
    for (int j = i+2; j < sum.size();j+=2){
        if(sum[min]>sum[j]) min = j ; 
    }
        temp = sum[i];
        sum[i] = sum[min];
        sum[min] = temp;
}

cout<<sum;


    return 0;
}