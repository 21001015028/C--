#include <iostream>
using namespace std;
int partition(int arr[], int s, int e)
{
    int pivot = arr[s];
    int count = 0;
    for (int i = s; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }
    // right position of pivot element
    int pivotindex = s + count;
    swap(arr[pivotindex], arr[s]);

    // left and right part
    int i = 0, j = e;
    while (i < pivotindex && j > pivotindex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < pivotindex && j > pivotindex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotindex;
}
void quicksort(int arr[], int s, int e)
{
    if (s <= e)
    {
        return;
    }
    int p = partition(arr, s, e);

    quicksort(arr, s, p - 1);
    quicksort(arr, p+1 , e);
}
int main()
{
    int arr[6] = {2, 5, 4, 1, 9,9};
    int n = 6;
     quicksort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;


    return 0;
}