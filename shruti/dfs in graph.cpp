#include <bits/stdc++.h>
using namespace std;

int maxPath = INT_MAX;
vector<int> ssp;
void dfs(int src, int dest,  vector<vector<int>> graph, vector<int> ans, vector<bool> visited){


      if(src == dest){

          if(ans.size() < maxPath){
              maxPath = ans.size();
              ssp = ans;
          }

          return;
      }


      for(auto u : graph[src]){

          if(visited[u] == 0){
              visited[u] = 1;
              ans.push_back(u);
              dfs(u, dest, graph, ans, visited);
              visited[u] = 0;
              ans.pop_back();
          }
      }



}


int main()
{
     int n, e;
     cin >> n >> e;
     vector<vector<int>> graph(n);

     for(int i = 0; i < e; i++){
         int src, dest;
         cin >> src >> dest;
         graph[src].push_back(dest);
     }

     int src, dest;
     cin >> src >> dest;

     vector<bool> visited(n, 0);
     vector<int> ans;
     ans.push_back(src);
     dfs(src, dest,  graph, ans, visited);

     for(auto u : ssp){
         cout << u << " ";
     }


     return 0;

}
