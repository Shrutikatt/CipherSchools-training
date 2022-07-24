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

    int out = 0;
    int indeg = 0;
    int mx = 0;

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

        if(count >= mx)
        {
            mx = count;
            out = i;
        }

    }

    cout << "Node with max Out degree : " << out << '\n';
    mx = 0;
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

        if(count >= mx)
        {
            mx = count;
            indeg = i;
        }

    }

    cout << "Node with max In degree : " << indeg;




    return 0;
}
