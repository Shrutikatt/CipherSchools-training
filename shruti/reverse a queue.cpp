#include<iostream>
#include<queue>
using namespace std;
int fun(queue<int> &q)
{
    if(q.empty())
    {
        return 0;
    }

    int x = q.front();
    q.pop();

    fun(q);

    q.push(x);
}

int main()
{

    queue<int> q;

    cout << "enter the elements: \n";
    int n;
    while (true)
    {
        cin>>n;
        if(n == -1)
        {
            break;
        }
        q.push (n);
    }

   n = fun(q);

    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }

    return 0;

}
