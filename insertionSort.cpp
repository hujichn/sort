#include "insertionSort.h"

vector<int> insertion_sort(vector<int> arr)
{
    int n = arr.size();
    int i,j,tmp;

    for(i=1; i<n; ++i)
    {
        if(arr[i]<arr[i-1])
        {
            tmp = arr[i];
            for(j=i; arr[j-1]>tmp && j>0; --j)
            {
                arr[j] = arr[j-1];
            }
            arr[j] = tmp;
        }
    }
    return arr;
}

