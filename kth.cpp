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
        int counter = 0;
        long long i ;
            for ( i = 0 ; i >=0 ; i++){
            if ( i % n != 0 ){
                counter++;
                
            }
            if (counter == k )
            {
                cout<< i;
                break;
            }
            
        }
            
        }
        
        
    }
