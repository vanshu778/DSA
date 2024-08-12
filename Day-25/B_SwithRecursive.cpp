#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& arr, int s, int e, int& key) {
  // base case 
  // case-1 -> key not found
  if (s > e)
    return -1;

  int mid = (s + e) / 2;
  // case-2 -> key found 
  if (arr[mid] == key)
    return mid;
  
  //shortcut return  (arr[mid] < key) ?binarySearch(arr, mid + 1, e, key) : binarySearch(arr, s, mid - 1, key);
  
  // arr[mid]<key -> right search
  if (arr[mid] < key) {
    return binarySearch(arr, mid + 1, e, key);
  }
  else {
    // arr[mid]>key -> left search 
    return binarySearch(arr, s, mid - 1, key);
  }
}

int main() {
  vector<int> v{10, 20, 40, 60, 70, 90, 99};
  int target = 99;
  int n = v.size();
  int s = 0;
  int e = n - 1;

  int ans = binarySearch(v, s, e, target);
  cout << "Answer is: " << ans << endl;
  return 0;
}