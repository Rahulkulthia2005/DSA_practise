#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
        vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int,int> mpp;
            for(int i=0;i<nums.size();i++)
            {
                int num=nums[i];
                int moreneeded=target-num;
                if(mpp.find(moreneeded) != mpp.end()){
                    return {mpp[moreneeded],i};
                }
                mpp[num]=i;
            }
        return{-1,-1};
    }
int main()
    {
        vector <int> nums={2,7,11,15};
        int target=9;
        vector<int> result = twoSum(nums, target); 
        cout << "Index: " << result[0] << ", " << result[1] << endl;
        return 0;
    }
