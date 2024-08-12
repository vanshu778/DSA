#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void printDigit(int n){
  // Base Case
  if(n == 0){
    return;
  }
  // One Case Solved
  int digit = n % 10;
  
  // Baki Recursive Sambhal Lega
  printDigit(n/10);

  cout << digit << " ";
}

int main(){
  int n ; 
  cout<<"Enter the number : ";
  cin>>n;
  if(n == 0){
    cout<<"Number is Zero"<<endl;
  }
  printDigit(n);
}