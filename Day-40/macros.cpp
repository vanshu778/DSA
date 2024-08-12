#include <iostream>
using namespace std;

#define PI 3.14159465
#define MAXX(x,y)(x>y?x:y)
  
float circleArea(float r){
  return PI * r * r;
}

float circlePerimeter(float r){
  return 2 * PI * r;
}

void fun(){
  int x = 6;
  int b = 17;
  int c = MAXX(x,b);
}

void fun1(){
  int a = 6;
  int b = 17;
  int c = MAXX(a,b);
}

void fun2(){
  int x = 6;
  int y = 17;
  int c = MAXX(x,y);
}
int main() {
  cout <<circleArea(65.4)<<endl;
  fun();
  fun1();
  fun2();
  
}