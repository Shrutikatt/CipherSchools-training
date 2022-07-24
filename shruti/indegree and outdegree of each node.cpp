#include <iostream>
#include<vector>
using namespace std;

int main()
{

    int n, e;
    cin >> n >> e;

    vector<vector<int>> graph(n, vector<int>(n,0));

    for(int i = 0; i < e; i++)
    {
        int src, dest;
        cin >> src >> dest;

        graph[src][dest] = 1;
    }


    for(int i = 0; i < n; i++)
    {
        int count = 0;
        for(int j = 0; j < n; j++)
        {
            if(graph[i][j] == 1)
            {
                count++;
            }
        }

        cout<<"\noutdegree of "<<i<<" is "<<count;

    }


    for(int i = 0; i < n; i++)
    {

        int count = 0;

        for(int j = 0; j < n; j++)
        {
            if(graph[j][i] == 1)
            {
                count++;
            }
        }

        cout<<"\nindegree of "<<i<<" is "<<count;

    }


    return 0;
}
