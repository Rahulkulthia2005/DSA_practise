#include<iostream>
#include<vector>
using namespace std;
vector<int> Product(vector<int>nums)
{
    int n=nums.size();
    vector <int> ans(n);
    for(int i=0;i<n;i++)
    {
        int product=1;
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                product=product*nums[j];
            }
        }
        ans[i]=product;
    }
    return ans;
}
int main()
{
    vector <int>nums={1,2,3,4};
    vector <int>ans=Product(nums);
    for(int i:ans)
    {
    cout<<i<<endl;
    }
    return 0;
}