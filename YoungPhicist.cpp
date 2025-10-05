#include<iostream>
#include<stack>
using namespace std;
int main(){
    int n;
    cin >> n;
    int x = 0,y =0 ,z= 0;
    stack<int> X;
    stack<int> Y;
    stack<int> Z;

for (int i = 0; i < n; i++){
    cin >>x>>y>>z;
    X.push(x);
    Y.push(y);
    Z.push(z);
}
x=0;
z=0;
y=0;
while (!X.empty()&&!Y.empty()&&!Z.empty())
{
    x+=X.top();
    X.pop();
    y+=Y.top();
    Y.pop();
    z+=Z.top();
    Z.pop();

}

if (x==0&&y==0&&z==0)cout<<"YES";

else cout<<"NO";



return 0;

}