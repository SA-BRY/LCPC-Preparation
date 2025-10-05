#include <iostream>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, s, m;
        cin > n >> s >> m;
        vector<pair<int, int>> for (int i = 0; i < n; i++)
        {
            int 1, r;
            cin >> 1 >> r;
            vec[i] = {1, r};
            int mx = vec[0].first;
            for (int i = 1; i < n; i++)
                mx = max(mx, vec[i].first - vec[i - 1].second);
        }
        mx = max(mx, m - vec[n - 1].second);
        if (mx >= s)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}