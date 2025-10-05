#include<iostream>
#include<vector>


using namespace std;
int main(){
    int n , k;
    cin >> n;
    cin >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }


    for (int i = 0; i < k; i++)
    {
        int q;
        cin >> q;

        int l = -1, r = n;
        int mid;

        while ( r > l + 1 )
        {
            mid =  (l + r) / 2;

            if(a[mid] < q) {
                l = mid;
            }
            else{
                r = mid;
            } 
        }
       cout << r + 1  << endl; 
    }
    
    
}