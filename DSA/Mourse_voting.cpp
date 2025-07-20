#include <iostream>
#include <vector>
using namespace std;
vector <int> majority(vector <int> nums)
{
    int n=nums.size();
    int freq=1,ans=nums[0];
    for(int i=1;i<n;i++)
    {
        if(num[i]==num[i-1])
        {
            freq++;
        }
        else
        {
            freq--;
            ans = nums[i];
        }
        if(ans>n/2)
        {
            return ans;
        }
        return ans;
    }

}
int main()
{
    vector <int> nums={1,2,2,1,1,1};
    vector <int> ans=majority(nums);
    for(int num:ans)
    {
        cout<<nums[0];
    }
    return 0; 
}
