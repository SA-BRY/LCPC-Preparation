#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        vector<char> bin(m);
        vector<char> temp(m);

        for (int i = 0; i < m; i++)
        {
            cin >> bin[i];
        }

        set<string> x;
        for (int i = 0; i < n; i++)
        {
            temp = bin;
            int l, r;
            cin >> l >> r;
            sort(temp.begin() + (l - 1), temp.begin() + r);
            string finalWord;
            for (int i = 0; i < m; i++)
            {
                finalWord += temp[i];
            }

            x.insert(finalWord);

        }
        cout << x.size() << endl;
    }
}