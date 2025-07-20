#include <iostream>
using namespace std;
int main()
{
    int n=5,st,end,i;
    int arr[5]={1,2,3,4,5};
    for(st=0;st<n;st++)
    {
        for(end=st;end<n;end++)
        {
            for(i=st;i<=end;i++)
            {
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
}