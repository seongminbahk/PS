#include <iostream>

using namespace std;

int N;
int grid[20][20];

int main() {
    cin >> N;  

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> grid[i][j];
        }
    }
    
    int max = 0;
    int cur = 0;
    for (int i = 0; i < N-2; i++) {
        for (int j = 0; j < N-2; j++) {
            cur = 0;
            for(int k = 0; k < 3; k++){
                for(int l = 0; l < 3; l++){
                    cur += grid[i + k][j + l];
                }
            }

            if(cur > max){
                max = cur;
            }
        }
    }


    cout << max;
    // Please write your code here.

    return 0;
}
