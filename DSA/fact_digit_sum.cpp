#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int f[10];
    f[0]=1;
    for(int i=1;i<10;i++)
    {
        f[i]=f[i-1]*i;
    }
    vector<int> ans;
    for(int i=9;i>0;i--){
        while(f[i]<=n){
            n -= f[i];
            ans.push_back(i);
        }
    }
    reverse(ans.begin(),ans.end());
    for(int d : ans)
    {
        cout<<d;
    }
    return 0;
}