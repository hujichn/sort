#include "bubbleSort.h"

vector<int> bubble_sort(vector<int> arr)
{
    int n = arr.size();
    for(int i=0; i<n; ++i){
        for(int j=1; j<(n-i);++j){
            if(arr[j-1] > arr[j]){
                swap(arr[j-1], arr[j]);
            }
        }
    }
    return arr;
}
//优化1：某一趟遍历如果没有数据交换，则说明已经排好序了，因此不用再进行迭代了
vector<int> bubble_sort1(vector<int> arr)
{
    int n = arr.size();
    for(int i=0; i<n; ++i){
        bool sorted = true;
        for(int j=1; j<(n-i);++j){
            if(arr[j-1] > arr[j]){
                swap(arr[j-1], arr[j]);
                sorted = false;
            }
        }
        if(sorted == true) break;
    }
    return arr;

}
//优化2：记录最后一次交换发生的位置，说明后面的元素已经有序，就可以缩小遍历的范围
vector<int> bubble_sort2(vector<int> arr)
{
    int n = arr.size();
    int k = n;
    int last_swap = n;
    for(int i=0; i<n; ++i)
    {
        bool sorted = true;
        for(int j=1; j<k; ++j){
            if(arr[j-1] > arr[j]){
                swap(arr[j-1], arr[j]);
                sorted = false;
                last_swap = j;
            }
        }
        if(sorted) break;
        k = last_swap;
    }
    return arr;

}
