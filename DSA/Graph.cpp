#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>> graph(5);
    graph[0].push_back(1);
    graph[0].push_back(4);
    graph[1].push_back(2);
    graph[1].push_back(3);
    graph[1].push_back(4);
    graph[2].push_back(3);
    graph[3].push_back(4);
    for(int i=0;i<5;i++)
    {
        cout<<"Vertex "<<i<<" connected to: ";
        for(int neighbour:graph[i]){
            cout<<neighbour<<" ";
        }
        cout<<endl;
    }
    return 0;
}