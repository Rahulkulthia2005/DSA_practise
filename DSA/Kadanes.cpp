#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n=7,st,end;
    int arr[7]={3,-4,5,4,-1,7,8};
    int maxSum=INT_MIN;
    for(st=0;st<n;st++)
    {
        currSum=0;
        for(end=st;end<n;end++)
        {
            if(currSum<0)
            {
                currSum=0;
                
            }
            else
            currSum+=arr[end];
            maxSum = max(currSum,maxSum);
        }

    }
    return 0;

}