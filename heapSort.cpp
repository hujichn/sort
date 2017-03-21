#include "heapSort.h"
//调整为一个堆
void Heap_Adjust(vector<int> &arr,int s,int m)
{
    int temp = arr[s];
    for(int j=2*s+1;j<=m;j = 2*j+1)
    {
        if(arr[j]<arr[j+1]&&j<m)
        {
            j++;
        }
        if(temp>arr[j])
            break;
        arr[s] = arr[j];
        s = j;
    }
    arr[s] = temp;
}

//堆排序
void heapsort(vector<int> &arr, int n)
{
    //创建一个大顶堆
    for(int s = n/2-1;s>=0;s--)
    {
        Heap_Adjust(arr,s,n-1);
    }

    //排序
    for(int i = n-1;i >= 1;i--)
    {
        swap(arr[0],arr[i]);
        Heap_Adjust(arr,0,i-1);
    }

}

vector<int> heap_sort(vector<int> arr)
{
    int n = arr.size();
    vector<int> result = arr;
    heapsort(result, n);
    return result;
}
