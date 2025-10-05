#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    vector<int> list;
    int specialCards = n / m;
    int remaining = n % m;

    int price = (specialCards * b) + (remaining * a);
    int oneWay = n * a;
    int special;
    if(n % m == 0){
    special = n / m;
    } else {
    special = (n / m) + 1;
    }

    special *= b;
    list.push_back(special);
    list.push_back(oneWay);
    list.push_back(price);

    sort(list.begin(),list.end());
    cout << list[0];
}