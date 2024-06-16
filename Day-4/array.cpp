#include <iostream>
using namespace std;

void printArray(int arr[], int size){
  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

void inc(int arr[],int size){
    arr[0]=arr[0]+10;

  printArray(arr,size);
}

int main() {

  int arr[]={5,6};
  int size=2;
  inc(arr,size);

  printArray(arr,size);
  // array initialization

  // int arr[] = {2, 3, 4, 6, 7};
  // int brr[5] = {2, 4, 6, 8, 10};
  // int crr[10] = {2, 4, 6, 8, 10};
  // int drr[4] = {2, 4, 6, 8, 10}; // error ape
  // cout << "Array initialized successfully" << endl;

  // int arr[] = {1,3,5,7,9};
  // printing all values
  // for(int index=0;index<5;index++){
  //   cout<<arr[index]<<" ";
  // }
  // int arr[10];
  // cout<<"Enter the input values in array"<<endl;
  // for(int i=0;i<10;i++){
  //   cin>>arr[i];
  // }
  // cout<<"printing the values in array"<<endl;
  // for(int i=0;i<10;i++){
  //   cout<<arr[i]<<" ";
  // }

  // take 5 elements in array and print their doubles
  //  int arr[5]={1,2,3,4,5};
  //  for(int i=0;i<5;i++){
  //    cout<<2*arr[i]<<" ";
  //  }

  // int arr[5]={1,3,5,7,9};
  // for(int i=0;i<5;i++){
  //   arr[i]=1;
  //   cout<<arr[i]<<" ";
  // }

  // int arr[5];
  // for(int i=0;i<10;i++){
  //   cout<<arr[i]<<" ";
  // }

  // memset(int arr, 5, sizeof(arr)); // WRONG
  // for (int i = 0; i < 5; i++)
  //   cout << arr[i] << " ";

  
}