#include "shellsort.h"
vector<int> shell_sort(vector<int> arr)
{
    int n = arr.size();
    int i,j,tmp;
    int step = round(n/2);
    while(step > 0)
    {
        for(i=step; i<n; ++i)
        {
            if(arr[i] < arr[i-step])
            {
                tmp = arr[i];
                for(j=i; arr[j-step]>tmp && j>=step; j=j-step){
                    arr[j] = arr[j-step];
                }
                arr[j] = tmp;
            }
        }
        step = round(step/2);
    }
    return arr;
}
