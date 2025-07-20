#include<iostream>
#include<vector>
using namespace std;

void DFSUtil(int v, vector<vector<int>>&adj,vector<bool>& visited) {
    visited[v]=true;
    cout<<v<<" ";
    for(int i=0;i<adj[v].size();i++)
    {
        if(adj[v][i]==1 && !visited[i])
        DFSUtil(i,adj,visited);
    }
}
int main()
{
    int V=5;
    vector<vector<int>> adj(V,vector<int>(V,0));
    adj[0][1]=adj[1][0]=1;
    adj[0][4]=adj[4][0]=1;
    adj[1][2]=adj[2][1]=1;
    adj[1][3]=adj[3][1]=1;
    adj[1][4]=adj[4][1]=1;
    adj[2][3]=adj[3][2]=1;
    adj[3][4]=adj[4][3]=1;
    vector<bool> visited(V,false);
    

    return 0;
}