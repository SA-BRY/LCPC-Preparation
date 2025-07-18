#include<iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;
int main(){



// fixed array




int arr[5] = {1,3,5,3,0}; 

cout<<sizeof(arr)<<"\n"; // how many bytes in the array 


    for (int i = 0; i < 5; i++){
    cout<<arr[i]<<"\t";
    }

memset(arr,0, sizeof(arr)); cout<<"\n";


    for (int i = 0; i < 5; i++){
    cout<<arr[i]<<"\t";
    }



   // std::fill(start_iterator, end_iterator, value_to_assign);


fill(arr,arr+5, 10);cout<<"\n"; //  works well with strings


    for (int i = 0; i < 5; i++){
    cout<<arr[i]<<"\t";
    }


    cout<<arr;




//vectors



//vector is a dynamic array that can grow or shrink during runtime.
//Comes with helpful methods like .push_back(), .size(), .clear()
cout<<"\n==================\n";


vector<int> v(4 ,3);
vector<int> v2;

cout<<v.empty()<<"\n";


v.push_back(10);
v.push_back(5);


if (! v.empty()){

    for (int i = 0; i < v.size(); i++){
    cout<<v[i]<<"\t";
    
    }
}


// cout<<v.size();
// //how many elements


// cout<<v2.empty();
// // if empty return 1 otherwise 0



// v.pop_back();
// //drop the last element


// cout<<v.back();
// // retutn the last elemnt



// cout<<v.front();
// //return the last element



// v.clear();
// //drop all elements


// sort(v.begin(), v.end());
// // v.begin() points to the first element
// // v.end points to next pointer after last element
// // this is a finction to sort a vetor


// v.insert(v.begin() + 1, 5);
// // to insert in spicific postion



// v.erase(v.begin() + 2);
// // to drop from spicific postion



// v.resize(10);



// v.assign(5, 7);



// swap(v, v2);

// // swapping values between 2 vectors





// //Quick note 

// // Use Case in ICPC
// // Use arrays when size is known and performance is critical.
// // Use vectors when you need to store a growing list (like input data, adjacency list, etc).

    return 0;
}


