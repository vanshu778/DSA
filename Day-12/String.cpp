#include <iostream>
#include <string>
using namespace std;

// bool compareString(string a , string b){
//   if(a.length() != b.length())
//     return false;

//    for(int i=0;i<a.length();i++){
//      if(a[i]!=b[i]){
//        return false;
//       }
//   }
//   return true;
// }

int main() {
  // string str;
  // //cin>>str;
  // getline(cin,str);
  // cout<<str<<endl;

  // cout<<"length: "<<str.length()<<endl;
  // cout<<"Empty: "<<str.empty()<<endl;
  // str.push_back('A');
  // cout<<str<<endl;
  // str.pop_back();
  // cout<<str<<endl;
  // cout<<str.substr(0,6)<<endl;

  // string a = "Love";
  // string b = "Lover";
  // if(a.compare(b)==0){
  //   cout<<"a and b are exactly same strings"<<endl;
  //   }
  //   else{
  //   cout<<"a and b are not same"<<endl;
  //   }

  // string x="cbcd";
  // string y="bcde";
  // cout<<x.compare(y)<<endl;

  // string sentence="Hello jee saare kese ho";
  // string target="Hell";
  // cout<<sentence.find(target)<<endl;
  // if(sentence.find(target)==string::npos){
  //   cout<<"Not found"<<endl;
  // }

  string str = "This is my First Message";
  string word = "Vanshika";
  str.replace(11, 5, "Second");
  cout << str << endl;
  return 0;
}