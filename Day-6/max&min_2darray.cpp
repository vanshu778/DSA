#include <iostream>
#include<climits>
using namespace std;

int getMax(int arr[][3],int rows,int cols){
  int maxi=INT_MIN;
  for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
      if(arr[i][j]>maxi){
        maxi = arr[i][j];
      }
    }
  }
  return maxi;
}

int getMin(int arr[][3],int rows,int cols){
  int min=INT_MAX;
  for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
      if(arr[i][j]<min){
        min = arr[i][j];
      }
    }
  }
  return min;
}

int main() {
  int arr[4][3];
  int rows=4;
    int cols=3;

    //row wise input
    for(int i=0;i<rows;i++){
      for(int j=0;j<cols;j++){
        cin>>arr[i][j];
      }
    }
    cout<<"printing row wise"<<endl;

    for(int i=0;i<rows;i++){
      for(int j=0;j<cols;j++){
        cout<<arr[i][j]<<" ";
      }
      cout<<endl;
    }
  cout<<"Max Number: "<<getMax(arr,rows,cols)<<endl;
  cout<<"Min Number: "<<getMin(arr,rows,cols);

  return 0;
}