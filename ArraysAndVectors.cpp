#include<iostream>
#include <vector>
#include <cstring>
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

cout<<v.empty()<<"\n";


v.push_back(10);
v.push_back(5);


if (! v.empty()){

    for (int i = 0; i < v.size(); i++){
    cout<<v[i]<<"\t";
    
    }
}

/*
v.size()	عدد العناصر	cout << v.size();
v.empty()	هل فارغ؟	if(v.empty())
v.push_back(x)	إضافة عنصر في النهاية	v.push_back(10);
v.pop_back()	حذف العنصر الأخير	v.pop_back();
v.back()	جلب آخر عنصر	cout << v.back();
v.front()	جلب أول عنصر	cout << v.front();
v.clear()	حذف كل العناصر	v.clear();
v[i]	الوصول إلى العنصر i	v[2] = 5;
v.begin() و v.end()	مؤشرات للبداية والنهاية	sort(v.begin(), v.end());
v.insert(pos, x)	إدخال عنصر في موقع معين	v.insert(v.begin() + 1, 100);
v.erase(pos)	حذف عنصر في موقع معين	v.erase(v.begin() + 2);
v.erase(start, end)	حذف مجال من العناصر	v.erase(v.begin() + 1, v.begin() + 3);
v.resize(n)	إعادة حجم المصفوفة	v.resize(10);
v.assign(n, val)	إعادة ملء المتجه	v.assign(5, 7); // [7,7,7,7,7]
swap(v1, v2)	تبادل القيم بين متجهين	swap(v1, v2);

*/


    return 0;
}