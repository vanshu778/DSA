#include <iostream>
#include <vector>
using namespace std;

bool checkSorted(vector<int> &arr, int &n, int i) {
  // base case
  if (i >= n - 1) {
    return true;
  }

  // processing
  if (arr[i + 1] < arr[i])
    return false;

  // recurion
  return checkSorted(arr, n, i + 1);
}

int main() {
  vector<int> v{1, 1, 1, 1, 1, 1};
  int n = v.size();
  int i = 0;

  bool isSorted = checkSorted(v, n, i);

  if (isSorted) {
    cout << "Array is sorted" << endl;
  } else {
    cout << "Array is not sorted" << endl;
  }

  return 0;
}