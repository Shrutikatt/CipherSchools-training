#include<iostream>
using namespace std;
int main()
{

    int max_so_far = 0;
    int row = 0;

    int m, n;
    cin>>m>>n;
    int arr[m][n];

    cout<<"enter numbers : ";
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }

    for(int i = 0; i < m; i++)
    {

        int count = 0;
        int max_count = 0;

        for(int j = 0; j < n; j++)
        {
            count = (arr[i][j] == 1) ? count + 1 : 0;
            max_count = max(max_count, count);
        }

        //max_count = max(max_count, count);

        if(max_count > max_so_far)
        {
            row = i + 1;
            max_so_far = max_count;
        }

    }

    cout <<"\n"<< max_so_far << " , " << row;
    return 0;
}
