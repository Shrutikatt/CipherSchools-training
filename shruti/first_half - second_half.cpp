#include<iostream>
using namespace std;
#include<queue>
int
main ()
{
    queue < int >q;

    int n;
    int first=0, sec=0;
    cout << "enter the elements: \n";

    while (true)
    {
        cin>>n;
        if(n == -1)
        {
            break;
        }
        q.push (n);
    }

    int size = q.size();
    for (int i = 0; i < (size + 1) / 2; i++)
        {
            int temp = q.front ();
            q.pop ();

            first += temp;
        }

    while (!q.empty ())
    {
        sec += q.front ();
        q.pop ();
    }

    cout <<first<<" - "<<sec <<" = " << first - sec;
}
