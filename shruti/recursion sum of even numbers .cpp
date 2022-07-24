#include<iostream>
using namespace std;

int fun(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n%2==0)
    {
        return n+fun(n-2);
    }

    return fun(n-1);

}
int main()
{
    int n;
    cin>>n;

    cout<<fun(n);
    return 0;
}
