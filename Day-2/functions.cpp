#include <iostream>
using namespace std;

// void printName(){
//   int n;
//   cout<<"Enter the value of n:"<< endl;
//   cin>>n;

//   for(int i=0;i<n;i++){
//     cout<<"Vanshika"<<endl;
//   }
// }
// int main() {
// printName();
// void printNumber(int num){
//   cout<<num<<endl;
// }

// void printNumber(int num){
//   cout<<num<<endl;
// }

// int main() {
// int a=5;
// printNumber(a);
// }

// Add 2 numbers
// int add(int a, int b){
//   int result=a+b;
//   return result;
// }

// int main(){
//   int a,b;
//   cout<<"Enter the value of a:"<<endl;
//   cin>>a;

//   cout<<"Enter the value of b:"<<endl;
//   cin>>b;

//   int sum = add(a,b);
//   cout<<"Addition result is:"<<sum<<endl;

//   return 0;
// }

// find max 3 numbers
//  int findmax(int a,int b, int c){
//    if(a>b && a>c){
//      return a;
//    }
//    else if(b>a && b>c){
//      return b;
//    }
//    else{
//      return c;
//    }
//  }
//  int main(){
//    int a,b,c;
//  cin >> a >> b >> c;
//    int maxNumber=findmax(a,b,c);
//    cout<<maxNumber<<endl;
//  }

// counting 1 to N

// void printCounting(int n){
//   for(int i=1;i<=n;i++){
//     cout<<i<<" ";
//   }
//   cout<<endl;
// }
// int main(){
//   int n;
//   cout<<"Enter the value n:"<<endl;
//   cin>>n;

//   printCounting(n);
// }

// function of Students and Grade problem
//  char getgrade(int marks){
//    if(marks>=90)
//      return 'A';
//    else if(marks>=80)
//      return 'B';
//    else if(marks>=70)
//      return 'C';
//    else if(marks>=60)
//      return 'D';
//    else
//      return 'F';
//  }
//  int main(){
//    int marks;
//    cout<<"Enter the marks:"<<endl;
//    cin>>marks;

//   char finalGrade=getgrade(marks);
//   cout<<finalGrade<<endl;
// }

// Sum upto N

// int getSum(int n){
//   int sum = 0;
//   for(int i=0;i<=n;i++){
//     sum=sum+i;
//   }
//   return sum;
// }
// int main(){
//   int n;
//   cout<<"Enter the value of n:"<<endl;
//   cin>>n;

//   int ans=getSum(n);
//   cout<<"Sum upto "<<n<<"is "<<ans<<endl;
//   return 0;
// }

// Sum of Even number upto N
// int getEvenSum(int n){
//   int sum = 0;
//   for(int i=2;i<=n;i+=2){
//     sum=sum+i;
//   }
//   return sum;
// }
// int main(){
//   int n;
//   cout<<"Enter the value of n:"<<endl;
//   cin>>n;

//   int ans=getEvenSum(n);
//   cout<<"Sum upto "<<n<<"is "<<ans<<endl;
//   return 0;
// }

// Display area of circle
// float area(int r) {
//   float area_circle = 3.14 * r * r;
//   return area_circle;
// }
// int main() {
//   float r;
//   cin >> r;
//   float area_circle=area(r);
//   cout << "Area of Circle: " << area_circle;
// }

// given number is even or odd

// bool checkEven(int n){
//   if(/* n%2==0 */ (n & 1)==0){
//     return true;
//   }
//   else{
//     return false;
//   }
// }

// int main(){
//    int n;
//   cin>>n;
//   bool isEven= checkEven(n);

//   if(isEven){
//     cout<<n<<" is Even number \n";
//   }
//   else{
//     cout<<n<<" is Odd number \n";
//   }
// }

// check given number is prime or not
//  bool checkPrime(int n){
//    int i=2;
//    for(i=2;i<n;i++){
//      if(n%i==0){
//        return false;
//      }
//    }
//    return true;
//  }

// int main(){
//   int n;
//   cin>>n;
//   bool isPrime = checkPrime(n);
//   if(isPrime){
//     cout<<"Prime\n";
//   }
//   else{
//     cout<<"Not a prime\n";
//   }
// }

// print all prime from 1 to N
//  bool checkPrime(int n){
//    int i=2;
//    for(i=2;i<n;i++){
//      if(n%i==0){
//        return false;
//      }
//    }
//    return true;
//  }

// int main(){
//   int n;
//   cin>>n;
//   for(int i=2;i<=n;i++){
//     bool isIprime = checkPrime(i);
//     if(isIprime){
//       cout<<i<<" ";
//     }
//  }
}
