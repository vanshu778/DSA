#include <cmath>
#include <iostream>
using namespace std;

// Decimal to Binary Conversion
// Method 1 = Division
//  int decimaltoBinary(int n) {
//    int binaryno=0;
//    int i=0;
//    while (n > 0){
//      int bit = n % 2;
//      binaryno=bit*pow(10,i++)+binaryno;
//      n = n / 2;
//    }
//  return binaryno;
//  }

// Method 2 = Bitwise
//  int decimaltoBinary(int n) {
//    int binaryno=0;
//    int i=0;
//    while (n > 0){
//      int bit = (n&1);
//      binaryno=bit*pow(10,i++)+binaryno;
//      n=n>>1;
//  }
//  return binaryno;
//  }

// int main() {
//   int n;
//   cin >> n;
//   int binary=decimaltoBinary(n);
//   cout<<binary;
// }

// Binary to Decimal Conversion
//  int binarytoDecimal(int n){
//    int decimal=0;
//    int i=0;
//    while(n>0){
//       int bit = (n&1);
//      decimal=bit*pow(10,i++)+decimal;
//      n=n>>1;
//      i++;
//    }
//    return decimal;
//  }

// int main(){
//   int binaryno;
//   cin>>binaryno;
//   int decimal=binarytoDecimal(binaryno);
//   cout<<decimal;
// }
