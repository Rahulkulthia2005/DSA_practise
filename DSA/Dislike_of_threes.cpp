#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i=1,count=0;
        cin>>n;
        while(1){
            if(i%3!=0 && i%10!=3)
            {
                count++;
                if(count==n){
                    cout<<i<<endl;
                    break;
                }
            }
            i++;
        }
    }
    
}