/*#include<iostream>
using namespace std;
int main()
{
    int a[10], n , i, j, t;

    cout<<"enter the no. of elements: ";
    cin>>n;

    cout<<"enter the elements: \n";
    for(i=0; i<n; i++){
        cin>>a[i];
    }

    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }

    cout<<"\n\nelements in ascending order: \n";
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
*/

//for better time complexity use following code

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
        int count = 0;
        for(int j=0; j<n-i-1; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                count++;
            }
        }
        if(count == 0)
            {
                break;
            }
    }

    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}
