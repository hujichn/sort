#include <iostream>
#include <vector>
#include <string>
#include "bubbleSort.h"
#include "selectionSort.h"
#include "insertionSort.h"
#include "shellSort.h"
#include "mergeSort.h"
#include "quickSort.h"
#include "heapSort.h"
using namespace std;

void print(string pre, vector<int> arr)
{
    int n = arr.size();
    cout << "The result of " << pre << " is: ";
    for(int i=0; i<n; ++i)
    {
        cout<< arr[i] << ' ';
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {3,5,3,2,1};
    vector<int> result;
    result = bubble_sort(arr);
    print("bubble sort", result);
    result = bubble_sort1(arr);
    print("bubble sort 1", result);
    result = bubble_sort2(arr);
    print("bubble sort 2", result);
    result = selection_sort(arr);
    print("selection_sort", result);
    result = insertion_sort(arr);
    print("insertion_sort", result);
    result = shell_sort(arr);
    print("shell_sort", result);
    result = merge_sort(arr);
    print("merge_sort", result);
    result = quick_sort(arr);
    print("quick_sort", result);
    result = heap_sort(arr);
    print("heap_sort", result);

    return 0;
}
