#include <iostream>
using namespace std;

// class abc{
// public:
// static int x,y;
// void print() const{
//   cout<<x<<" "<<y<<endl;
//   //this
//   //cout<<this -> x<<" "<<this -> y<<endl;
// }
// };

// int abc::x;
// int abc::y;

// int main() {
//   abc obj1;
//   obj1.x=1;
//   obj1.y=2;
//   obj1.print();
  
//   abc obj2;
//   obj2.x=10;
//   obj2.y=20;
//   obj1.print();
//   obj2.print();

//   return 0;
// }

class abc{
public:
  int x,y;
  abc() : x(0),y(0) {}
  static void print(){
    cout<<"I am in Static "<<__FUNCTION__<<endl;
  }
};

int main(){
  abc obj1;
  abc::print();
  abc obj2;
  abc::print();
  abc::print();
  return 0;
}