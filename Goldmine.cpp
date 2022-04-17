#include <bits/stdc++.h>

using namespace std;


int collectGold(int n, int m, vector<vector<int>>& arr, vector<vector<int>>& dp) {
   
for(int j = dp[0].size()-1;j>=0;j--){
for(int i = dp.size()-1;i>=0;i--){
if(j == dp[i].size()-1){
dp[i][j] = arr[i][j];
}
else if(i == 0){
dp[i][j] = max(dp[i][j+1],dp[i+1][j+1])+arr[i][j];
}
else if(i == dp.size()-1){
    dp[i][j] = max(dp[i][j+1],dp[i-1][j+1])+arr[i][j];
}
else{
    dp[i][j] = max(dp[i][j+1],max(dp[i-1][j+1],dp[i+1][j+1]))+arr[i][j];
}
    }
  }
  int ans = dp[0][0];
  for(int i = 1;i<dp.size();i++){
      ans = max(dp[i][0],ans);
  }
 return ans;
}



int main() {
  int n, m;
  cin >> n >> m;

  vector<vector<int>> arr(n, vector<int>(m, 0));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }

  vector<vector<int>> dp(n, vector<int>(m, 0));

  cout << collectGold(n, m, arr, dp);

}
