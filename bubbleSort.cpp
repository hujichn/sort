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
//�Ż�1��ĳһ�˱������û�����ݽ�������˵���Ѿ��ź����ˣ���˲����ٽ��е�����
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
//�Ż�2����¼���һ�ν���������λ�ã�˵�������Ԫ���Ѿ����򣬾Ϳ�����С�����ķ�Χ
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
