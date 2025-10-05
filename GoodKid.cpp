#include <iostream>
#include<vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> number(n);

        for (int i = 0; i < n; i++)
        {

            cin >> number[i];
        }
        sort(number.begin(), number.end());

        number[0] += 1;

        int product = 1;

        for (int i = 0 ; i < n; i++){
            product*= number[i];
        }

        cout << product << endl;

    }
}