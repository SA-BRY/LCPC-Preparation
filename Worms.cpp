#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
long long n ,m ,q ,a ;
vector<long long> piles;
long long last = 0;
cin >> n;
for (long long i = 0; i < n; i++){
    cin >> a; 
    
    piles.push_back(last + 1);
    piles.push_back( last + a);
    last = last + a ;

}
cin >> m;


for (long long i = 0; i < m; i++)
{
    cin >> q;
    long long first = 0 , last = (n*2) - 1;
    long long mid = 0;
    while (first < last){
        mid = (last + first) / 2;
        if (piles[mid] >= q){
            last = mid - 1;
        }else first = mid + 1;
     
    }
    
    if((mid)%2 == 0){
        cout << last/2 +1 << endl;
    }else cout << (last/2)+1 << endl;
    
    
}
    return 0;
}