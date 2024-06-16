#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int firsOccurance(vector<int> arr, int target){
    int s=0;
  int e=arr.size()-1;
  int mid = s+(e-s)/2;
  int ans=-1;
  
  while(s<=e){
    if(arr[mid] == target){
      ans=mid;
      e=mid-1;
    }
    else if(target>arr[mid]){
    s=mid+1;
    }
    else if(target<arr[mid]){
      e=mid-1;  
    }
  mid = s+(e-s)/2;
  }
  return ans;
 }

int main() {
  vector<int>v{1,2,2,3,3,3,3,3,3,4,4,4,4,6,7};
  int target=4;
  int indexOfFirstOcc = firsOccurance(v,target);
  cout<<"ans is "<< indexOfFirstOcc <<endl;
  auto ans2=lower_bound(v.begin(),v.end(),target);
  cout<<"ans2 is "<<ans2-v.begin()<<endl;
}