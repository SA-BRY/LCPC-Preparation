#include <iostream>
using namespace std;

bool good(long long m, long long k)
{
    return (m * (m + 1)) / 2 <= k;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long k = 0;
    cin >> k;

    long long l = -1, r = 10000;
    while (r > l + 1)
    {
        long long m = (l + r) / 2;
        if (good(m, k))
            l = m;
        else
            r = m;
    }

    cout << l << "\n";

    return 0;
}
