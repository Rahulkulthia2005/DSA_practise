#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n=5,st,end,i;
    int arr[5]={1,2,3,4,5};
    int max_sum = INT_MIN;
    for(st=0;st<n;st++)
    {
        int cur_sum=0;
        for(end=st;end<n;end++)
        {
            cur_sum+=arr[end];
            max_sum=max(cur_sum , max_sum);
           
        }
        
    }
     cout<<max_sum;
    return 0;
}