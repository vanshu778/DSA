#include <iostream>
using namespace std;

class abc{
  public:
    int x;
    int *y;

    abc(int _x, int _y) : x(_x), y(new int(_y)){}

//default dump copy constructor: it does shallow copy
abc(const abc &obj){
  x=obj.x;
  y=obj.y;
}

//Deep copy

// abc(const abc &obj){
//   x=obj.x;
//   y=new int(*obj.y);
// }

    void print() const{
      printf("X:%d\nPTR Y:%p\nContent of Y:%d\n\n", x, y, *y);
    }

~abc(){
  delete y;
}
};

int main() {
  // abc a(1,2); 
  // cout<<"Printing a\n";
  // a.print();

  // abc b=a;//call by copy constructor
  // cout<<"Printing b\n";
  // b.print();

  // *b.y=20;
  // cout<<"Printing b\n";
  // b.print();

  // cout<<"Printing a\n";
  // a.print();
  abc *a = new abc(1,2);
  abc b=*a;
  delete a;
  b.print();
  return 0;
}