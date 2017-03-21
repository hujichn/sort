#ifndef HEAPSORT_H_INCLUDED
#define HEAPSORT_H_INCLUDED
#include <vector>
#include <algorithm>
using namespace std;

void Heap_Adjust(vector<int> &arr,int s,int m);
void heapsort(vector<int> &arr,int len);
vector<int> heap_sort(vector<int> arr);

#endif // HEAPSORT_H_INCLUDED
