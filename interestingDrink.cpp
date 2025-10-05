#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{

    int n;
    cin >> n;
    vector<int> shopPrice(n);
    for (int i = 0; i < n; i++)
        cin >> shopPrice[i];

    sort(shopPrice.begin(), shopPrice.end());

    int days;
    cin >> days;

    while (days--)
    {
        int coin;
        cin >> coin;
        int first = 0, last = n - 1;
        while (first <= last)
        {
            
            int mid =first +  (last - first) / 2;

            if (shopPrice[mid] > coin)
            {
                last = mid - 1;
            }
            else first = mid + 1 ;
        }
        cout << first << endl;
    



    }
}