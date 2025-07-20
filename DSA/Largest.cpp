#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n=5,max_sum;
    int arr[5]={45,21,32,16,50};
    int ans = INT_MIN ;
    for(int i=0;i<n;i++)
    {
       
        max_sum = max(arr[i],ans);
    }
    cout<<max_sum;
    return 0;
}