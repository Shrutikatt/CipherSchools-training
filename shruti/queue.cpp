#include <iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> Q;

    for(int i = 0; i < 10; i++)
        Q.push(i);

    while(!Q.empty())
    {
        cout << Q.front() << " ";
        Q.pop();
    }

}
