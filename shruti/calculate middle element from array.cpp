#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"how many no. ";
    cin>>n;

    int a[n];
    cout<<"enter the numbers: \n";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    if(n%2 != 0)
    {
        n /= 2;
        cout<<"Middle element is: "<<a[n];
    }
    else
    {
        n /= 2;
        cout<<"Middle element is: "<<a[n-1];
    }
    return 0;

}
