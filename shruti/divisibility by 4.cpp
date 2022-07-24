#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    if( ((n & 1) == 0) && (((n >> 1) & 1) == 0) )
    {
        cout << "YES" << '\n';
    }
    else{
    cout << "NO";
    }
    return 0;
}


