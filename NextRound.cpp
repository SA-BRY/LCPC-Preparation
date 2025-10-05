#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> score(n);
    for (int i = 0; i < n; i++) {
        cin >> score[i];
    }

    int threshold = score[k - 1];
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (score[i] >= threshold && score[i] > 0) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}