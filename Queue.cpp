#include<iostream>
#include<queue>
#include <deque>
using namespace std;

int main(){

    //queue

    queue<int> q;

// pushing to the back of the queue 
    q.push(10); 
    q.push(20);
    q.push(30); 
    /*
    
        f           e
        ______________
    <=    10 20 30       <=
        --------------

    */

    cout << q.front() << "\n"; // returns  the element of in the front of queue
    q.pop(); //delete or drop the in the front of the queue
    cout<<q.back()<<"\n";//returns the element of in the back of queue
    cout<<q.empty()<<"\n";//returns true or 1 if the queue is empty otherwise 0 or false
    cout<<q.size()<<"\n";//returns the lingth or number of elements in a queue




    //deque

    deque<int> dq;

    dq.push_back(10);   
    dq.push_front(5);   
    dq.push_back(15);  

        /*
    
        f           e
        ______________
    <=>   5 10 15       <=>
        --------------

        
    */
    cout << dq.front() << "\n"; // 5
    cout << dq.back() << "\n";  // 15
                        // [5,10, 15]
    dq.pop_front();     // [10, 15]
    dq.pop_back();      // [10]



    cout << dq.front() << "\n";// 10


    cout << dq.empty() << "\n";//returns true or 1 if the queue is empty otherwise 0 or false

    cout<< dq.size() << "\n";//returns the lingth or number of elements of stack






    return 0 ;

}