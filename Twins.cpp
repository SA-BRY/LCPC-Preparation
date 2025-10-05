#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
    vector<int> coins;

    int n;
    cin >> n;
    int coin;
    for (int i = 0; i < n; i++)
    {
        cin >> coin;
        coins.push_back(coin);
    }
    sort(coins.begin(), coins.end());

    // for (int i = 0; i < n; i++)
    // {
    //     cout << coins[i];
    // }

    int twinShare = accumulate(coins.begin(), coins.end(), 0) / 2, sum = 0;
    //    cout << endl<< twinShare;
    int counter = 0;
    for (int i = n - 1; i >= 0; i--)
    {

        if (sum > twinShare)
        {
            cout << 
        }
        else

            if (sum == twinShare)
        {

        }
        else
            sum += coins[i];

        counter++;
    }

    return 0;
}