#include <iostream>
using namespace std;

int fun(int arr[], int start, int end)                 //worst case = n^2
{
    int key = arr[end];
    int i = start - 1;

    for(int j = start; j < end; j++)
    {
        if(arr[j] < key)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }

    swap(arr[i+1], arr[end]);

    return i + 1;
}

void quickSort(int arr[], int start, int end)
{

    if(start < end)
    {

        int pok = fun(arr, start, end);

        quickSort(arr,start, pok - 1);
        quickSort(arr,pok + 1, end);
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    quickSort(arr,0,n-1);

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}



/*

#include <iostream>
using namespace std;

int fun(int arr[], int start, int end)
{
    int key = arr[end];
    int i = start - 1;

    for(int j = start; j < end; j++)
    {
        if(arr[j] < key)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }

    swap(arr[i+1], arr[end]);

    return i + 1;
}

void quickSort(int arr[], int start, int end)
{

    if(start < end)
    {

        int pok = fun(arr, start, end);

        quickSort(arr,start, pok - 1);
        quickSort(arr,pok + 1, end);
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    srand(time(NULL));

    for(int i = n - 1; i > 0; i--)
    {
        int index = rand() % i;
        swap(arr[index],arr[i]);
    }


    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }


    quickSort(arr,0,n-1);

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}*/
