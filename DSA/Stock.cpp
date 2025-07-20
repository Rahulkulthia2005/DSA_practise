#include <iostream>
#include <vector>
#include <climits>
using namespace std;
vector <int> stock(vector<int> price)
{
    int n=price.size();
    int maxprofit=0;
    int bestbuy=price[0];
    for(int i=1;i<n;i++)
    {
        if(price[i]>bestbuy)
        {
            maxprofit=max(maxprofit,price[i]-bestbuy);

        }
        bestbuy=min(price[i],bestbuy);
       
    }
     return maxprofit;
}
int main()
{
    vector <int> price={7,1,5,3,6,4};
    vector <int> ans=stock(price);
    cout<<ans[0];   
    return 0;
}