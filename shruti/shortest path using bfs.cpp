
#include <bits/stdc++.h>
using namespace std;

int main()
{
     int n, e;
     cin >> n >> e;
     vector<vector<int>> graph(n);

     for(int i = 0; i < e; i++){
         int src, dest;
         cin >> src >> dest;
         graph[src].push_back(dest);
         graph[dest].push_back(src);

     }

     int src, dest;

     cin >> src >> dest;
     queue<int> q;
     vector<int> visited(n,0);

     int dist = 1;
     q.push(src);
     visited[src] = 1;

     while(!q.empty()){
         int size = q.size();

         for(int i = 0; i < size; i++){
             int node = q.front();
             q.pop();

             for(int j = 0; j < graph[node].size(); j++){
                 int neigh = graph[node][j];

                 if(neigh == dest){
                     cout << "distance b/w " << src << " and " << neigh << " is " << dist;
                     return 0;
                 }

                 if(visited[neigh] == 0){
                     visited[neigh] = 1;
                     q.push(neigh);
                 }

             }
         }
         dist++;
     }

     return 0;

}







//shortest path from a given node


#include <bits/stdc++.h>
using namespace std;

int main()
{
     int n, e;
     cin >> n >> e;
     vector<vector<int>> graph(n);

     for(int i = 0; i < e; i++){
         int src, dest;
         cin >> src >> dest;
         graph[src].push_back(dest);
         graph[dest].push_back(src);

     }

     int src;
     cin >> src;

     queue<int> q;
     vector<int> dist(n,0);

     q.push(src);
     dist[src] = 0;

     while(!q.empty()){
         int size = q.size();

         for(int i = 0; i < size; i++){
             int node = q.front();
             q.pop();

             for(int j = 0; j < graph[node].size(); j++){
                 int neigh = graph[node][j];

                 if(dist[neigh] == 0){
                     dist[neigh] = 1 + dist[node];
                     q.push(neigh);
                 }

             }
         }
     }
     dist[src] = 0;
     for(auto u : dist){
         cout << u << " ";
     }

     return 0;

}
