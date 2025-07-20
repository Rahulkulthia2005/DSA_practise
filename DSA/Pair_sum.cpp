/*#include <iostream>
using namespace std;
int main(){
    int i,j,n=4,target=9;
    int arr[4]={2,7,11,15};
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==target)
            {
                cout<<arr[i]<<" "<<arr[j];
            }
        }
    }
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;
vector <int> pairsum(vector <int>nums,int target)
{
    vector <int> ans;
    int n=nums.size();
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
}
int main()
{
    vector <int> nums={2,7,11,15};
    int target=9;
    vector <int> ans=pairsum(nums,target);
    cout<<ans[0]<<" "<<ans[1];
    return 0;
}*/
#include <iostream>
#include <vector>
using namespace std;
vector <int> pair_sum(vector <int> nums, int target)
{
    int i=0;
    int n=nums.size();
    int j=n-1;
    int Ps;
    vector<int> ans;
    while(i<j)
    {
        Ps=nums[i]+nums[j];
        if(Ps>target)
        {
            j--;
        }
        else if(Ps<target)
        {
            i++;
        }else {
        ans.push_back(i);
        ans.push_back(j);
        return ans;
        }
    }

}
int main()
{
    vector <int> nums={2,7,11,15};
    int target=9;
    vector <int> ans=pair_sum(nums,target);
    cout<<ans[0]<<" "<<ans[1];
    return 0;
}