#include <iostream>
using namespace std;

// bool find(int arr[],int size,int key){
//   for(int i=0;i<size;i++){
//     if(arr[i]==key)
//       return true;
//   }
//   return false;
// }

// int main() {
//   int arr[5]={1,3,5,7,9};
//   int size=5;

//   cout<<"Enter the key to find"<<endl;
//   int key;
//   cin>>key;

//   if(find(arr,size,key)){
//     cout<<"Found"<<endl;
//   }
//   else{
//     cout<<"Not Found"<<endl;
//   }
//   return 0;
// }
int main()
{
int arr[]={1,2,3,4,5,6,7,8,9};
int size=8;

int key=15;
bool flag=0;
//0-> not found
//1->found
  
for(int i=0;i<size;i++){
  if(arr[1]==key){
    flag=1;
    break;
  }
}

if(flag)
  cout<<"Present"<<endl;
else
  cout<<"Absent"<<endl;
}