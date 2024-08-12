#include <iostream>
#include<string>
using namespace std;

void printSubsequence(string str,string output,int i){
  //base case 
  if(i>=str.length()){
    cout<<output<<endl;
    return;
  }
  //exclude
  printSubsequence(str,output,i+1);
  
  //include
  //below line is responsible formconcatenation of output string ans ith charact character of str string
  output.push_back(str[i]); // or output=output+str[i];
  printSubsequence(str,output,i+1);
}


int main() {
  string str="abc";
  string output="";

  int i=0;
  printSubsequence(str,output,i);
  return 0;
}


//using vector
// #include <iostream>
// #include<string>
// #include<vector>
// using namespace std;

// void printSubsequence(string str,string output,int i, vector<string>& v){
//   //base case 
//   if(i>=str.length()){
//     v.push_back(output);
//     return;
//   }
//   //exclude
//   printSubsequence(str,output,i+1,v);

//   //include
//   //below line is responsible formconcatenation of output string ans ith charact character of str string
//   output.push_back(str[i]); // or output=output+str[i];
//   printSubsequence(str,output,i+1,v);
// }


// int main() {
//   string str="abc";
//   string output="";
//   vector<string>v;
  
//   int i=0;
//   printSubsequence(str,output,i,v);
//   cout<<"Printing all subsequences "<<endl;
//   for(auto val:v){
//     cout<<val<<" ";
//   }
//   return 0;
// }