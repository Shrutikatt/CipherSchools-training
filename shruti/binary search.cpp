#include<iostream>
using namespace std;
int main()
{                                 //Array should be sorted for binary search
    int target, n;

    cout<<"array size: ";
    cin>>n;

    int a[n];
    cout<<"\nenter elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    cout<<"\ntarget element: ";
    cin>>target;

    int start = 0, end = n-1, mid;

    while(start <= end)
    {
        mid = (start+end)/2;

        if(a[mid] == target)
        {
            cout<<"\n"<<mid;
            return 0;
        }
        else if(a[mid] > target)
        {
            end = mid-1;
        }
        else {
            start = mid+1;
        }
    }

    cout<<"element not found status: -1";
    return 0;
}
