#include <iostream>

using namespace std;
int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int cnt = 0, trip = 0;
        for (int i = 0; i < n; i++)
        {
            bool day;
            cin >> day;
            if (day == 0)
            {
                if (trip < k)
                {
                    trip++;
                }
                else
                {
                    cnt++;
                    trip = 0;
                }
            }
            else
            {
                if(trip>=k)
                {
                    cnt++;
                    trip = 0;
                }
                
                trip = 0;
            }
        }
        if(trip >=k){
            cnt++;
        }
        cout << cnt << endl;
    }
}