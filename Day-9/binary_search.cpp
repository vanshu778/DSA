#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int binarySearch(int arr[], int n, int target){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<=e){
        int element = arr[mid];
        if(target==element)
            return mid;
        else if(target < element){
            e = mid - 1;
        }
        else
            s = mid + 1;
            mid = s + (e-s)/2;
    }
    return -1;
}

  int main(){
      // int arr[] = {2,4,6,8,10,12,16};
      // int size = 7;
      // int target = 12;

      // int ans = binarySearch(arr, size, target);

      // if(ans==-1){
      //     cout<<"target not found\n";
      // }
      // else{
      //     cout<<"target found at index "<<ans<<'\n';
      // }

    vector<int>v{1,2,3,4,5,6};
    int arr[] = {1,2,3,4,5,6,7};
    int size=7;

    if(binary_search(arr,arr+size,7)){
    //if(binary_search(v.begin(),v.end(),3)){
      cout<<"Found"<<endl;
    }
    else{
      cout<<"Not Found"<<endl;
    }
  return 0;
}