#include <iostream>
#include<vector>
using namespace std;

int main() {

  //union
  // int arr[] = {1,3,5,7,9};
  // int size_a=5;
  // int brr[]={2,4,6,8};
  // int size_b=4;

  // vector<int>ans;

  // for(int i=0;i<size_a;i++){
  //   ans.push_back(arr[i]);
  // }

  // for(int i=0;i<size_b;i++){
  //   ans.push_back(brr[i]);
  // }

  // cout<<"Printing ans array"<<endl;
  // for(int i=0;i<ans.size();i++){
  //   cout<<ans[i]<<" ";
  // }

  //intersection

  vector<int>arr{1,2,3,4,6,8};
  vector<int>brr{3,4,10};

  vector<int>ans;
  for(int i=0;i<arr.size();i++){
    int element = arr[i];

    for(int j=0;j<brr.size();j++){
      if(element == brr[j]){
        ans.push_back(element);
      }
    }
  }

  for(auto value:ans){
    cout<<value<<" ";
  }
}
