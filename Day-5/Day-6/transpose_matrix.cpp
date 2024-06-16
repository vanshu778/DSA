#include <iostream>
using namespace std;

void transpose(int arr[][3],int r,int c,int transposeArr[][3]){
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      // swap(arr[i][j],arr[j][i]);
      transposeArr[j][i]=arr[i][j];
    }
  }
}

void printArray(int arr[][3],int r, int c){
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
}
int main() {
  int arr[3][3];
  int rows=3;
  int cols=3;

    //row wise input
    for(int i=0;i<rows;i++){
      for(int j=0;j<cols;j++){
        cin>>arr[i][j];
      }
    }

  cout<<"Printing array"<<endl;
  printArray(arr,rows,cols);
  cout<<"Starting transpose"<<endl;
  int transposeArr[3][3];
  transpose(arr,rows,cols,transposeArr);
  cout<<"Printing array again"<<endl;
  printArray(transposeArr,rows,cols);
}