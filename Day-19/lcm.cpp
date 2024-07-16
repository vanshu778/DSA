#include <iostream>
using namespace std;

// GCD of two positive integer numbers
int gcd(int A, int B) {
  if (A == 0)
    return B;
  if (B == 0)
    return A;

  while (A != B) {
    if (A > B) {
      A = A - B;
    } else {
      B = B - A;
    }
  }
  
}

int main() {
  int A = 4, B = 8;
  int lcm = (A * B) / gcd(A, B);
  cout << lcm << endl;
  return 0;
}
