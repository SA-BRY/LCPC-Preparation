#include<iostream>
#include<stack>
using namespace std;


int main(){

stack<int> Ans;
int ans;
int sum=0;
int tempSum = 0;

int n;
cin>>n;

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < 3; j++)
    {
        cin>>ans;
        Ans.push(ans);
    }
    for (int j = 0; j < 3; j++)
    {
        tempSum+=Ans.top();
        Ans.pop();
    }
    if(tempSum>=2)sum+=1;
    tempSum =0;
}
cout<<sum;






    return 0;
}