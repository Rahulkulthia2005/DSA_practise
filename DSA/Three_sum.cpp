#include <iostream>
#include <vector>
using namespace std;
vector <int> Three_sum(vector <int> nums )
{   
    int n=nums.size();
    vector <int> ans;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                if(nums[i]+nums[j]+nums[k]==0)
                {
                    ans.push_back(nums[i]);
                    ans.push_back(nums[j]);
                    ans.push_back(nums[k]);
                    return ans;
                }
            }
        }
    }
}
int main()
{
    vector <int> nums = {-1,0,1,2,-1,-4};
    vector <int> ans=Three_sum(nums);
    cout<<ans[0]<<ans[1]<<ans[2];
    return 0;
}