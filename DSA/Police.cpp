#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    
    int police=0,unsolved=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==-1)
        {
            if(police>0)
            {
                police--;
            }
            else
            {
                unsolved++;
            }
        }
        else
        police=police+arr[i];
    }
    cout<<unsolved;
    return 0;
}