#ifndef QUICKSORT_H_INCLUDED
#define QUICKSORT_H_INCLUDED

#include <vector>
#include <algorithm>
using namespace std;
vector<int> quick_sort(vector<int> arr);
void quicksort(vector<int> &arr, int low, int high);
int Partition(vector<int> &arr,int low,int high);
#endif // QUICKSORT_H_INCLUDED
