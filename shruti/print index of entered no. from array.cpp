#include<iostream>
using namespace std;
int main()
{
    int a[] = {12, 32, 45, 98, 3, 6, 7, 8, 9, 10};

    int n = sizeof(a)/sizeof(a[0]);
    int num;
    cout<<"enter number: ";
    cin>>num;

    for(int i=0; i<n; i++)
    {
        if(a[i] == num)
        {
            cout<<i;
            return 0;
        }
    }
    cout<<"-1";

    return 0;
}
