#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        string ans;
        for (int i = 0; i < str.length(); i++)
        {
            if (i == 0)
            {
                ans = str[i];
            }
            else if (str[i] == ' ')
            {
                ans += str[i + 1];
            }
        }

        cout << ans  << endl;
    }
}