#include "quickSort.h"
vector<int> quick_sort(vector<int> arr)
{
    int n = arr.size();
    vector<int> result = arr;
    quicksort(result, 0, n-1);
    return result;
}
void quicksort(vector<int> &arr, int low, int high)
{
    int pivot;
    if(low<high)
    {
        pivot = Partition(arr, low, high);
        quicksort(arr, low, pivot-1);
        quicksort(arr, pivot+1, high);
    }
}
int Partition(vector<int> &arr,int low,int high)
{
    int pivotKey;
    pivotKey = arr[low];
    while(low<high)
    {
        while(low<high&&arr[high]>=pivotKey)
        {
            high--;
        }
        swap(arr[low],arr[high]);
        while(low<high&&arr[low]<=pivotKey)
        {
            low++;
        }
        swap(arr[low],arr[high]);
    }
    return low;
}
