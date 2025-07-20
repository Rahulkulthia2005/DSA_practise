#include <iostream>
using namespace std;
int main()
{
    int n=5;
    int arr[5]={1,2,5,8,9};
    int target=10;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==target)
        {
            cout<<"Target at found at the index "<<i;
        }

    }
    return 0;
}