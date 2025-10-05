#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <map>

using namespace std;



int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, a;
        cin >> n;
        map<long, long> pairs;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            if (pairs.count(a - i))
            {
                pairs[a - i]++;
            }
            else
                pairs.insert({a - i, 1});
        }
        long long ans = 0;
        for (const auto &m : pairs)
        {
            if (m.second > 1)
            {
                long long temp = m.second;
                ans += (temp*(temp + 1) / 2) - temp;
            }
        }

        cout << ans<< endl;
    }
}