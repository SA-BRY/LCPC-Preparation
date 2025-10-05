#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{

    int n, k;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    cin >> k;
    for (int i = 0; i < k; i++)
    {
        int ql, qr;
        cin >> ql >> qr;

        int l = -1, r = n;
        int mid;

        while (r > l + 1)
        {
            mid = (r + l) / 2;
            if (a[mid] < ql)
                l = mid;

            else
                r = mid;
        }
        int left = r;

        l = -1, r = n;
        while (r > l + 1)
        {
            mid = (r + l) / 2;

            if (a[mid] <= qr)
                l = mid;
            else
                r = mid;
        }
        int right = r;

        cout << right - left << endl;
    }
}
