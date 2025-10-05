#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
long long t;
cin >> t;
while(t--){

long long n , s , ns = 0;

cin >> n;
for (int i = 0; i < n; i++)
{
    cin >> s;
    ns+=s;

}

long long root = sqrt(ns);


if(root*root == ns){
    cout << "YES" << endl ;
}else cout << "NO" << endl;





}

    
}