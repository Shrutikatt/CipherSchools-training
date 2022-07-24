#include<iostream>
using namespace std;
int main()
{
    int n, temp;

    cout<<"enter array size: ";
    cin>>n;

    int a[n];

    cout<<"enter elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<n-1; i++)
    {
        int min_index = i;

        for(int j=i+1; j<n; j++)
        {
            if(a[j] < a[min_index])
            {
                min_index = j;
            }
        }

        temp = a[i];
        a[i] = a[min_index];
        a[min_index] = temp;
    }

    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }


 return 0;
}
