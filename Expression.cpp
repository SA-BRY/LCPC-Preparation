#include<iostream>
#include<set>
using namespace std;

int main(){

int a,b,c;
cin >>a >>b >>c;
set<int> value;

value.insert(a * b * c);
value.insert(a + b * c);
value.insert(a * b + c);
value.insert(a * (b + c));
value.insert((a + b) * c);
value.insert(a + b + c);
value.insert(a + (b * c));
value.insert((a * b) + c);

int biggest = *value.rbegin();
cout<< biggest;

    return 0 ;
}