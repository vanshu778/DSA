#include <iostream>
using namespace std;

void util(int* p){
  p=p+1;
}
int main() {
  // int a=5;
  // int* p=&a;

  // int** q = &p;

  // cout<<&a<<endl;
  // cout<<a<<endl;
  // cout<<p<<endl;
  // cout<<&p<<endl;
  // cout<<*p<<endl;
  // cout<<q<<endl;
  // cout<<&q<<endl;
  // cout<<*q<<endl;
  // cout<<**q<<endl;

  int a=5;
  int* p=&a;

  cout<<"before"<<endl;
  cout<<a<<endl;
  cout<<p<<endl;
  cout<<*p<<endl;
  util(p);
  cout<<a<<endl;
  return 0;
}