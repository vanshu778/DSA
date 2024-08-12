//Function Overloading
#include <iostream>
using namespace std;

class Maths {
public:
  int sum(int a, int b) {
    cout << "I am in First Signature " << endl;
    return a + b;
  }

  int sum(int a, int b, int c) {
    cout << "I am in Second Signature " << endl;
    return a + b + c;
  }

  int sum(int a, float b) {
    cout << "I am in Third Signature " << endl;
    return a + b;
  }
};
int main() {
  Maths obj;

  // cout<<obj.sum(2,3)<<endl;
  // cout << obj.sum(2, 3, 20) << endl;
  cout << obj.sum(2, 3.12f) << endl;
}



//operator overloading
#include <iostream>
using namespace std;

class p{
  public:
    int val;

     void operator+(p& obj2){
       int value1 = this->val;
       int value2 = obj2.val;
       cout<<(value2-value1)<<endl;
     }
};
int main() {
  p obj1, obj2;
  obj1.val = 10;
  obj2.val = 20;

  //this should print the difference between them
  obj1+obj2;
}


//overriding

#include <iostream>
using namespace std;

class Animal {
  public:
    Animal() 
    { 
      cout << "Animal constructor" << endl; 
    }
  virtual void speak() 
  { 
    cout << "Speaking" << endl; 
  }
};

class Dog : public Animal {
  public:
    Dog() 
  { 
    cout << "Dog constructor" << endl; 
  }
  // override
  void speak() 
  { 
    cout << "Barking" << endl; 
  }
};

int main() {
  // Dog a;
  // a.speak();

  // Dynamically object created
  //  Animal* a = new Animal();
  //  a->speak();

  // Dog* a = new Dog();
  // a->speak();

  // upcasting
  //  Animal* a = new Dog();
  //  a->speak();

  // downcasting -> without virtual keyword pointer method called
  // with virtual keyword whatever type of object is created it will call the
  // function/method of that class
  //   Dog* b =(Dog*) new Animal();
  //   b->speak();

  //constructor call
  //Animal* arr = new Animal();// o/p: Animal constructor
  //a->speak();
  
  //Dog* a = new Dog(); // using the child constructor output for this call is 1.Animal construcotr 2.Dog constructor because of inheritance and it is default behavior before printing child constructor it will call parent constructor

    //Animal* a = new Dog(); // inside the heap memory  i have make dog name object and how to refer this dog object by using Animal pointer 
  // output: 1.Animal construcotr 2.Dog constructor 

  //Dog* a = (Dog*)new Animal();
  //here output is 'Animal Constructor' why? because Animal() constructor are not depend upon anyone so it is called by itself only

  return 0;
}