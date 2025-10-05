#include<iostream>
#include<vector>
#include <iomanip>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
    int n;
    long long l;
    cin >> n >> l;
    vector<int> lanterns(n);
    for(int i = 0; i < n;i++){
        cin >> lanterns[i];
    }
    sort(lanterns.begin(),lanterns.end());
    float firstgap,endGap;
    float biggestMiddleGap = 0;
    firstgap = lanterns[0];
    endGap = l - lanterns.back();

    for(int i = 0; i < lanterns.size() - 1; i++){

        float currnet = lanterns[i + 1] - lanterns[i];
        if (currnet > biggestMiddleGap){
            biggestMiddleGap = currnet;
        }
    }
    biggestMiddleGap = biggestMiddleGap / 2;
    if(firstgap >= endGap && firstgap > biggestMiddleGap){
        cout << fixed << setprecision(7) << firstgap;
    } else if (firstgap <= endGap && endGap > biggestMiddleGap){
        cout << fixed << setprecision(7) << endGap;
    } else {
        cout << fixed << setprecision(7) << biggestMiddleGap;
    }
    }