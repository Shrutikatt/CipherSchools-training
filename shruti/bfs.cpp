#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> arr[n];

    int e;
    cin>>e;

    for(int i=0; i<e; i++)
    {
        int a,b;
        cin>>a>>b;
        arr[a].push_back(b);
//UNDIRECTED arr[b].push_back(a);
    }

    queue<int> q;
    vector<int> visited(n,0);
    q.push(0);

    while(!q.empty())
    {

        int f = q.front();
        q.pop();
        cout<<f<<" ";
        visited[f]=true;
        for(auto i:arr[f])
        {
// cout<<i<<" ";

            if(!visited[i])
            {
                q.push(i);
            }
        }
    }



}
