

#include <iostream>
using namespace std;
int main()
{
    int r, c, temp, temp1;
    cin>>r>>c;
    int a[r][c];

    cout<<"enter numbers: \n";

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cin>>a[i][j];
        }
    }

    temp = a[0][0];
    temp1 = a[0][0];

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(temp < a[i][j])
            {
                temp = a[i][j];
            }

            if(temp1 > a[i][j])
            {
                temp1 = a[i][j];
            }

        }
    }

    cout<<"smaller: "<<temp1<<" bigger: "<<temp;



    return 0;
}
