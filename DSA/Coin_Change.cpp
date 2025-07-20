#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr={1,2,5,10};
    int target=14;
    int n=arr.size();
    vector<vector<bool>> dp(n+1,vector<bool>(target+1,false));
    for(int i=0;i<=n;i++)
        dp[i][0] =true;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=target;j++){
            if(arr[i-1]>j){
                dp[i][j]=dp[i-1][j];
            }else {
                dp[i][j]=dp[i-1][j] || dp[i-1][j-arr[i-1]];
            }
        }
    }
    cout<< (dp[n][target] ? "yes" : "No");
    return 0;
}