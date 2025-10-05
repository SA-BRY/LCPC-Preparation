#include <iostream>
using namespace std;
int main()
{
    int ans = 0;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string inst;
        cin >> inst;
        if (inst == "X++" || inst == "++X")
        {
            ans++;
        }
        else ans--;
    }
        cout << ans;

    return 0;
}