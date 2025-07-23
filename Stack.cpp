#include<iostream>
#include<stack>
using namespace std;

int main (){
stack<int> st;
st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.push(5);
st.push(6);

cout<<st.top()<<"\n"; 
st.pop();
cout<<st.top()<<"\n";
cout<<st.empty()<<"\n";
cout<<st.size()<<"\n";


    return 0 ;
}