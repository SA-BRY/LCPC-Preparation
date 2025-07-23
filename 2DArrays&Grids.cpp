#include<iostream>
using namespace std;

int main(){

vector<vector<int>> grid(3, vector<int>(4)) =  {{1,2,3},
                                                {6,1,0},
                                                {7,4,2},
                                                {6,7,8}};

// accessing the elements
for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
        cout << grid[i][j] << " ";
    }
    cout << "\n";
}




int dx[] = {-1, 1, 0, 0}; // الحركة في الصف
int dy[] = {0, 0, -1, 1}; // الحركة في العمود

for (int dir = 0; dir < 4; dir++) {
    int ni = i + dx[dir];
    int nj = j + dy[dir];

    // تحقّق: هل داخل الحدود؟
    if (ni >= 0 && ni < n && nj >= 0 && nj < m)
        // grid[ni][nj] هو الجار
}


    return 0;
}