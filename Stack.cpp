#include<iostream>
#include<stack>
using namespace std;

int main (){


stack<int> st;

// pushing values to a stack from top which it is the only thing we can access
st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.push(5);
st.push(6);
/*



| 6 | top
| 5 |
| 4 |
| 3 |
| 2 |
| 1 |
|___|


*/

cout<<st.top()<<"\n"; // in this case it returns 6 

int stop = st.pop() ; // this function is delete from the top of the stack

cout<<st.top()<<"\n";// now it will return 5

cout<<st.empty()<<"\n"; // returns true or 1 if the stack is empty otherwise 0 or false


cout<<st.size()<<"\n"; //returns the lingth or number of elements of stack


//printing a stack 
cout<<"printing a stack\n";
while(st.size()>0){

    cout <<"|"<<st.top()<<"|"<<"\n";
    st.pop();
    
    }
    cout<<"---";

    return 0 ; //returns the size of the stack in this case it is 5
}