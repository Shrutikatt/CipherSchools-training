
#include <iostream>
using namespace std;
int main()
{
    int r, space=0;
    cin>>r;

    cout<<"enter numbers: \n";

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<=r-i+1; j++)
        {
            cout<<" ";

        }
            for(int j=1; j<=2*i+1; j++)
            {
                cout<<"*";
            }
            cout<<"\n";

    }

    for(int i=1; i<r; i++)
    {
        for(int j=1; j<=i+3; j++)
        {
            cout<<" ";
        }
        for(int j=1; j<=2*(r-i)-1; j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }

    return 0;
}
