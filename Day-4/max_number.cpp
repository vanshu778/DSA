 #include<iostream>
#include<climits>
using namespace std;

int main(){
  int arr[]={2,4,6,1,3,7,9,12,56,43,21};
  int size=11;

  int maxi = INT_MIN;
  int min = INT_MAX;
  for(int i=0;i<size;i++){
    if(arr[i]>maxi){
      maxi=arr[i];
          }
    if(arr[i]<min){
      min=arr[i];
    }
  }
  cout<<"maximum number is "<<maxi<<endl;
  cout<<"Minimum number is "<<min<<endl;
}
