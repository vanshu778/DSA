#include <iostream>
using namespace std;

// class Animal {
// public:
//   int age;
//   int weight;

//   // void eat(){
//   //   cout<<"Eating"<<endl;
//   // }
// };

// class Dog : private Animal {
// public:
//   void print() { cout << this->age; }
// };

// int main() {
//   Dog d1;
//   // d1.eat();
//   d1.print();
//   // cout<<d1.age;
// }

// 1. single inheritance
//  class car{
//    public:
//      string name;
//      int weight;
//      int age;

//     void speedUp(){
//       cout<<"Speeding up"<<endl;
//     }

//     void breaking(){
//       cout<<"Breaking"<<endl;
//     }
// };

// class scorpio : public car{

// };

// int main(){
//   scorpio s1;
//   s1.speedUp();
// }

// 2. Multilevel inheritance
//  class Fruit{
//    public:
//    string name;
//    };

// class Mango: public Fruit{
//   public:
//     int weight;
// };

// class Alphanso: public Mango{
//   public:
//     int sugarLevel;
// };

// int main(){
//    Alphanso a;
//   cout<<a.name<<" "<<a.weight<<" "<<a.sugarLevel<<endl;
//   return 0;
// }

// 3. Multiple inheritance
// class A {
// public:
//   //int physics;
//   int chemistry;
//   A(){
//     chemistry = 101;
//   }
// };

// class B {
// public:
//   int chemistry;
//   B(){
//     chemistry = 102;
//   }
// };

// class C : public A, public B {
// public:
//   int maths;
// };

// int main() {
//   C obj;
//   cout   << " " << obj.B::chemistry << " " << obj.maths << endl;
//   return 0;
// }

//4. Hiarchial inheritance
// class Car{
//   public:
//   int age;
//   int weight;
//   string name;
//   void speedup(){
//     cout<<"Speeding Up "<<endl;
//   }
// };

// class Scorpio: public Car{
  
// };

// class Fortuner:public Car{

// };

// int main(){
//   Scorpio s11;
//   s11.speedup();

//   Fortuner f11;
//   f11.speedup();
// }

// 5. Hybrid inheritance
 