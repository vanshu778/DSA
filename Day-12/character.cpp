 #include <iostream>
#include<string.h>
using namespace std;
//  //Length of string
// int getLength(char name[]){
//   int length = 0;
//   int i=0;

//   while(name[i]!='\0'){
//     length++;
//     i++;
//   }
//   return length;
// }


// //reverse of string
//   void reverseChararray(char name[]){
//   int n=getLength(name);
//   int i=0;
//   int j=n-1;

//   while(i<=j){
//   swap(name[i],name[j]);
//   i++;
//   j--;
//   }
// }  

// void replaceSpaces(char sentence[]){
//   int i=0;
//   int n=strlen(sentence);

//   for(int i=0;i<n;i++){
//     if (sentence[i] == ' '){
//       sentence[i] = '0';
//     }
//   }
// }

// bool checkpalindrome(char word[]){
//   int i=0;
//   int n=strlen(word);
//   int j=n-1;

//   while(i<=j){
//     if(word[i]!=word[j]){
//       return false;
//     }
//     else{
//       i++;
//       j--;
//     }
//   }
//   return true;
// }

void convertIntoUpperCase(char arr[]){
  int n = strlen(arr);
  for(int i=0;i<n;i++){
    arr[i] = arr[i]-'a'+'A';
  }
}

void convertIntoLowerCase(char arr1[]){
  int n = strlen(arr1);
  for(int i=0;i<n;i++){
    arr1[i] = arr1[i]+'a'-'A';
  }
}
int main() {
  // char name[100];
  // cout<<"Enter your name "<<endl;

  // cin>>name;
  // cout<<"Aapka naam "<<name<<" hai"<<endl;
  
  // int value = (int)name[6];
  // cout<<"value is: "<<value<<endl;

  // char ch[100];
  // ch[0]='a';
  // ch[1]='b';
  
  // char name[100];
  // cin>>name;
  // for(int i=0;i<7;i++){
  //   cout<<"index: "<<i<<" value: "<<name[i]<<endl;
  // }

  // int value=(int)name[6];
  // cout<<"value is: "<<value<<endl;
  
  // char arr[100];
  // cin>>name;
  // getline(cin,arr);
  // cin.getline(arr,50);

  // cout<<arr;

//    Length of string
//   char name[100];
//   cin>>name;
//   cout<<"length is: "<< getLength(name)<<endl;
// cout<<"Length is: "<<strlen(name)<<endl;


  // //reverse of string
  // char name[100];
  // cin>>name;
  // cout<<"Initially: "<<name<<endl;
  // reverseChararray(name);
  // cout<<"After reversal process: "<<name<<endl;

  // char sentence[100];
  // cin.getline(sentence,100);

  // replaceSpaces(sentence);
  // cout<<"Printing sentence "<<endl<<sentence<<endl;

  // char arr[100]="Babbab";
  // cout<<"palindrome check: "<<checkpalindrome(arr);

  char arr[100]="babbab";
  char arr1[100]="BABBAB";
  convertIntoUpperCase(arr);
  convertIntoLowerCase(arr1);
  cout<<arr<<endl;
  cout<<arr1<<endl;
  return 0;
}