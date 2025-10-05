#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>

using namespace std;
int main()
{
long long t;
cin >> t;
while(t--){
set<int> firstAns;
int n;
cin >> n;
string balloons;
cin >> balloons;

for (int i = 0; i < n; i++){
    firstAns.insert(balloons[i]);
}

cout << balloons.size()+firstAns.size() << endl;


}

    
}