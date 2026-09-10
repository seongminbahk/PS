#include <iostream>
#include <vector>

using namespace std;

int n, m;
int grid[100][100];

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    vector<int> v(100, 0);
    
    for (int i = 0; i < n; i++) {
        int cnt = 0;
        int cur = 0;
        int max = 0;
        for (int j = 0; j < n; j++) {
            if(grid[i][j] == cur){
                cnt++;
                if(cnt > max) max = cnt;
            }else{
                cur = grid[i][j];
                cnt = 1;
                if(cnt > max) max = cnt;
            }
        }

        v[max]++;
    }
    
    for (int i = 0; i < n; i++) {
        int cnt = 0;
        int cur = 0;
        int max = 0;
        for (int j = 0; j < n; j++) {
            if(grid[j][i] == cur){
                cnt++;
                if(cnt > max) max = cnt;
            }else{
                cur = grid[j][i];
                cnt = 1;
                if(cnt > max) max = cnt;
            }
        }

        v[max]++;
    }
    
    int ans = 0;

    for(int i = m; i < n + 1; i++){
        ans += v[i];
    }

    cout << ans;
    // Please write your code here.

    return 0;
}
