#include <iostream>
#include<vector>
using namespace std;

int main() {

  //triplet
  vector<int>arr{10,20,40,60,70};
  int sum=90;
  //outer loop will traverse for each element
  for(int i=0;i<arr.size();i++){
    int element=arr[i];

    for(int j=i+1;j<arr.size();j++){
      int element2=arr[j];

      for(int k=j+1;k<arr.size();k++){
        if(arr[k]+element2+element==sum){
          cout<<"Pair found ("<<element<<","<<element2<<","<<arr[k]<<")"<<endl;
        }
      }
    }
  }
  
}