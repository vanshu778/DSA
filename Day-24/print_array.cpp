//Program 02: Print array
#include<iostream>
using namespace std;

void printArray(int arr[], int index, int N){
    // Base Case
    if(index >= N){
        return;
    }

    // Processing
    cout<<arr[index]<<" ";

    // Recursive Relation/Call
   // printArray(arr,index +1 N);
     printArray(arr, ++index, N);
}

// void printArray(int arr[],int N){
//     // Base Case
//     if(N == 0){
//         return;
//     }

//     // Processing
//     cout<<arr[0]<<" ";

//     // Recursive Relation/Call
//    // printArray(arr,index +1 N);
//      printArray(arr+1, N-1);
// }
 
int main(){
    int arr[5] = {10,20,30,40,50};
    int size = 5;
    int index = 0;

   printArray(arr,index,size);
   // printArray(arr,size);
    return 0;
}