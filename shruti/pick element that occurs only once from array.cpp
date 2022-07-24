#include<iostream>
using namespace std;
int main()
{

    int a[] = {1, 3, 6, 4, 1, 6, 3};  //4 occurs only once
    int n = sizeof(a)/ sizeof(a[0]);
    int ans=0;

    for(int i=0; i<n; i++)
    {
        ans = ans ^ a[i];
    }

    cout<<ans;
}
