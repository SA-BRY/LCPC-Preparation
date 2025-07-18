#include<iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;
// ### 🧪 Task 1: Vector Basics

// **📝 Problem:**
// You're given a list of `N` numbers in ascending . Print them in reverse order.

// **✅ Input Format:**

// ```
// N
// A₁ A₂ A₃ ... Aₙ
// ```

// **✅ Output Format:**

// ```
// Aₙ Aₙ₋₁ ... A₁
// ```

// **🧠 Constraints:**


// * 1 ≤ N ≤ 10⁵
// * -10⁹ ≤ Aᵢ ≤ 10⁹

// #### 💡 Example:

// **Input:**

// ```
// 4
// 10 20 30 40
// ```

// **Output:**

// ```
// 40 30 20 10
// ```
int main(){


    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = n - 1; i >= 0; i--) {
        cout << v[i] << " ";
    }

    cout << endl;
    return 0;




}