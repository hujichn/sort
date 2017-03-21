#include "mergeSort.h"
void merge_array(vector<int> &arr, int b, int m, int e)
{
    int i=b, j=m+1, k=b;
    vector<int> tmp = arr;
    while(i<=m && j<=e) arr[k++] = tmp[i]<tmp[j]? tmp[i++]:tmp[j++];
    while(i<=m) arr[k++] = tmp[i++];
    while(j<=e) arr[k++] = tmp[j++];
}

void mergesort(vector<int> &arr, int b, int e)
{
    if(b<e)
    {
        int m = (b+e)/2;
        mergesort(arr, b, m);
        mergesort(arr, m+1, e);
        merge_array(arr, b, m, e);
    }
}
vector<int> merge_sort(vector<int> arr)
{
    int n = arr.size();
    vector<int> result = arr;
    mergesort(result, 0, n-1);
    return result;
}
