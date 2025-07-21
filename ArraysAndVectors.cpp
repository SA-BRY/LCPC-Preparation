#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    // fixed array
    int arr[5] = {1, 3, 5, 3, 0};

    cout << "\n===================printing array================\n";

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "\t";
    }

    cout << "\n================how many bytes in the array=======\n";

    cout << sizeof(arr) << "\n";

    cout << "\n===to print locatation of first elemetn in the array===\n";

    cout << arr << "\n";
    cout << arr + 1;

    cout << "\n==========fill function==========================\n";

    // std::fill(start_iterator, end_iterator, value_to_assign);

    fill(arr, arr + 5, 10);

    cout << "\n============================================\n";

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << "\t";
    }

    cout << "\n============================================\n";






    cout << "\n==================== vectors ==================\n";

    // vectors

    // vector is a dynamic array that can grow or shrink during runtime.
    // Comes with helpful methods like .push_back(), .size(), .clear()

    vector<int> v;

    vector<int> v2(4,3);


    cout << "\n==================== is the vector empty? =============\n";
    cout << "\nif empty return 1 otherwise 0\n";

    cout << v.empty() << "\n";
    
    cout << "\n=============adding to the end of the vector===========\n";

    v.push_back(10);
    v.push_back(5);
    v.push_back(3);
    v.push_back(6);

    if (!v.empty())
    {

        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << "\t";
        }
    }else cout<<"it is empty";
    
    cout<<"\n=========================================================\n";

cout<<"\n==================how many elements=====================\n";
    
    cout << v.size();


cout<<"\n==================drop the last element=====================\n";

    v.pop_back();

        if (!v.empty()){

        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << "\t";
        }
    }else cout<<"it is empty";
    

cout<<"\n==================retutn the last elemnt=====================\n";


    cout << v.back();

cout<<"\n==================return the first element=====================\n";

    cout << v.front();

    cout<<"\n==================sorting function=====================\n";
    sort(v.begin(), v.end());
    // v.begin() points to the first element
    // v.end points to next pointer after last element
    // this is a finction to sort a vetor
        if (!v.empty()){

        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << "\t";
        }
    }else cout<<"it is empty";
    
cout<<"\n==================drop all elements=====================\n";

    v.clear();

        if (!v.empty()){

        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << "\t";
        }
    }else cout<<"it is empty";
    
cout<<"\n==================resize function=====================\n";

    v.resize(4);

            if (!v.empty()){

        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << "\t";
        }
    }else cout<<"it is empty";

cout<<"\n==================assigning function=====================\n";

    v.assign(4, 7);

        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << "\t";
        }

cout<<"\n==================insert in spicific postion=====================\n";

    v.insert(v.begin() + 1, 5);

    
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << "\t";
        }


cout<<"\n==================drop from spicific postion=====================\n";

    v.erase(v.begin());


        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << "\t";
        }


cout<<"\n==================swaping function=====================\n";

    swap(v, v2);// swapping values between 2 vectors

    
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << "\t";
        }
        
        cout<<"\n";

        for (int i = 0; i < v.size(); i++)
        {
            cout << v2[i] << "\t";
        }



cout<<"\n==================================================\n";



    // Quick note

    // Use Case in ICPC
    // Use arrays when size is known and performance is critical.
    // Use vectors when you need to store a growing list (like input data, adjacency list, etc).

    return 0;
}
