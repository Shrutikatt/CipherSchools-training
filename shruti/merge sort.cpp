#include <iostream>
using namespace std;

void merge(int arr[], int start, int mid, int end)
{

    int temp[end - start + 1];

    int i = start;
    int j = mid + 1;
    int k = 0;

    while(i <= mid && j <= end)
    {

        if(arr[i] < arr[j])
        {
            temp[k++] = arr[i++];

        }
        else
        {
            temp[k++] = arr[j++];
        }
    }

    while(i <= mid)
    {
        temp[k++] = arr[i++];
    }

    while(j <= end)
    {
        temp[k++] = arr[j++];
    }

    for( k = 0, i = start ; i <= end; i++, k++)
    {
        arr[i] = temp[k];
    }

}

void mergeSort(int arr[], int start, int end)
{

    if(start < end)
    {
        int mid = (start + end) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}

int main()
{

    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    mergeSort(a, 0, n - 1);
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
