#include <iostream>

using namespace std;

int n, m;
int grid[200][200];

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    int cur = 0;
    int ans = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if((i + 2) < 201 && j < 201){
                cur = grid[i][j] + grid[i + 1][j] + grid[i + 2][j];
                if(cur > ans) ans = cur;
            }

            if((i) < 201 && (j + 2) < 201){
                cur = grid[i][j] + grid[i][j + 1] + grid[i][j + 2];
                if(cur > ans) ans = cur;
            }

            if((i + 1) < 201 && (j + 1) < 201){
                cur = grid[i][j] + grid[i][j + 1] + grid[i + 1][j + 1];
                if(cur > ans) ans = cur;
            }

            if((i + 1) < 201 && (j + 1) < 201){
                cur = grid[i][j] + grid[i][j + 1] + grid[i + 1][j];
                if(cur > ans) ans = cur;
            }

            if((i + 1) < 201 && (j + 1) < 201){
                cur = grid[i][j] + grid[i + 1][j] + grid[i + 1][j + 1];
                if(cur > ans) ans = cur;
            }

            if((i + 1) < 201 && (j + 1) < 201){
                cur = grid[i + 1][j] + grid[i][j + 1] + grid[i + 1][j + 1];
                if(cur > ans) ans = cur;
            }
        }
    }


    cout << ans;
    // Please write your code here.

    return 0;
}
