#include <iostream>
#include <vector>
using namespace std;
vector <int> Sort(vector <int>nums,target)
{
    int st=0,end=nums.size()-1;
    while(st<=end)
    {
        int mid=st+(rnd-2)/2;
        if(A[mid]==tar){
            return mid;
        }
        if(A[st] <=tar && tar<=A[mid])
        {
            end = mid+1;
        }
        else
        {
            st=mid+1;
        }
        else{
            if(A[mid]<= tar && tar <= A[end])
            {
                
            }
        }

    }
}
int main()
{   
    int target=0;
    vector <int> nums={ };
    return 0;
}