#include <iostream>
using namespace std;

void merge(int *arr, int s, int e) {
  int mid = (s + e) / 2;

  // find length of left and right array
  int lenleft = mid - s + 1;
  int lenright = e - mid;

  // assume to create arrays for left and right part
  int *left = new int[lenleft];
  int *right = new int[lenright];

  // copy values from original array to left array
  int k = s;
  for (int i = 0; i < lenleft; i++) {
    left[i] = arr[k];
    k++;
  }

  // copy values from original array to right array
  k = mid + 1;
  for (int i = 0; i < lenright; i++) {
    right[i] = arr[k];
    k++;
  }

  // Merge logic
  int leftIndex = 0;
  int rightIndex = 0;
  int mainArrayIndex = s;

  while (leftIndex < lenleft && rightIndex < lenright) {
    if (left[leftIndex] < right[rightIndex]) {
      arr[mainArrayIndex++] = left[leftIndex++];
    } else {
      arr[mainArrayIndex++] = right[rightIndex++];
    }
  }

  // copy logic for left array
  while (leftIndex < lenleft) {
    arr[mainArrayIndex++] = left[leftIndex++];
  }

  // copy logic for right array
  while (rightIndex < lenright) {
    arr[mainArrayIndex++] = right[rightIndex++];
  }
}

// Merge sort (Dnc algorithm)
void mergeSort(int arr[], int s, int e) {
  // Base case
  // s==e -> single element
  // s>e -> invalid array

  if (s >= e)
    return;
  // find mid and break the original array in two equal parts
  int mid = (s + e) / 2;

  // left part sort using recursion
  mergeSort(arr, s, mid);

  // right part sort using recursion
  mergeSort(arr, mid + 1, e);

  // now merge 2 sorted arrays
  merge(arr, s, e);
}

int main() {
  int arr[] = {4, 5, 13, 2, 12};
  int n = 5;

  int s = 0;
  int e = n - 1;
  mergeSort(arr, s, e);

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}