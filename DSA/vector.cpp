#include<iostream>
#include<vector>
using namespace std;
int main(){
    //vector<int> vec={1,2,3};
    //cout << vec[0];
    vector<int> vec(3,0);
    for(int i : vec){
        cout<<i;
    }
    vector<char> vec1={'a','b','c','d'};
    for(char j : vec1)
    {
        cout<<j;
    }
    //Functions
    //Size
    cout<<"Size = "<<vec.size()<<endl;
    //push_back
    vector <int> vec2;
    vec2.push_back(20);
    cout<<"Size = "<<vec2.size();
    //pop_back
    vec2.pop_back();
    cout<<"Size = "<<vec2.size();
    //front
    cout<<"Front "<<vec.front();
    //back
    cout<<"back"<<vec1.back();


    return 0;
    
}