#include "selectionSort.h"
vector<int> selection_sort(vector<int> arr)
{
    int n = arr.size();
    for(int i=0; i<n; ++i)
    {
        int minPos = i;
        for(int j=i+1;j<n;++j)
        {
            if(arr[j]<arr[minPos])
                minPos = j;
        }
        swap(arr[i], arr[minPos]);
    }
    return arr;
}
