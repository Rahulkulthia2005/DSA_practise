#include<iostream>
#include<vector>
using namespace std;
int most_water(vector <int> height)
{
    int n = height.size();
    int hei , width;
    int maxwater=0,water=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            width=j-i;
            hei=min(height[i],height[j]);
            water=width*hei;
             maxwater=max(maxwater,water);
        }
       
    }
     return maxwater;

}
int main()
{
    vector <int> height={1,8,6,2,5,4,8,3,7};
    int maxwater = most_water(height);
    cout<<maxwater;
    return 0;
}