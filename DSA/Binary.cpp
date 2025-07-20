#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums={-1,0,3,5,9,12};
    int n=nums.size();
    int st=0,end=n-1;
    int target=0;
    while(st<=end)
    {
        int mid=st+(end-st)/2;
        if(nums[mid]>target)
        {
            end=mid-1;
        }
        else if(nums[mid]<target)
        {
            st=mid+1;
        }
        else 
        {
            cout<<"Target element found at index"<<mid;
            return 0;
        }

    }
    return 0;

}