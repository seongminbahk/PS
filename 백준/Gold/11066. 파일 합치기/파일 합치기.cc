#include <bits/stdc++.h>
using namespace std;

int main(){
   int t, k;
   
   
   cin >> t;
   while(t--){
       cin >> k;
       int arr[501] = {0, };
       int dp[501][501] = {0, };
       int cnt[501] = {0, };
       
       for(int i = 1; i <=k; i++){
           cin >> arr[i];
           cnt[i] = cnt[i - 1] + arr[i];
       }
       
       for(int i = 1; i <= k; i++){
          for(int j =1; j <= k - i; j++){
              dp[j][i+j] = 1000000000;
              for(int l = j; l < i + j; l++){
                  dp[j][i + j] = min(dp[j][i + j], dp[j][l] + dp[l + 1][i + j] + cnt[i + j] - cnt[j - 1]);
              }
          }
       }
       
      
       cout << dp[1][k] << endl;
   }
   
   return 0;
}
