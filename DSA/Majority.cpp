#include <iostream>
#include <vector>
using namespace std;
vector <int> max_sum(vector <int> nums)
{
    int n=nums.size();
    for(int i=0;i<n;i++)
    {
        int freq=0;
        for(int j=0;j<n;j++)
        {
            if(nums[i]==nums[j])
            {
                freq++;
            }
        }
        if(freq>n/2)
        {
            return {nums[i]};
        }
    }

}
int main()
{
    vector <int> nums={1,2,2,1,1};
    vector <int> ans = max_sum(nums);
    for(int num : ans)
    {
        cout<<nums[0];
    }
    return 0;

}