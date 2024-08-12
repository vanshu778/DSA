#include <iostream>
using namespace std;

class Animal{
  // state or properties
private:
int weight;
public:
  int age;
  string name;

//behaviour
  void eat(){
    cout<<"Eating"<<endl;
  }
  void sleep(){
    cout<<"Sleeping"<<endl;
  }

int getWeight(){
  return weight;
}

void setWeight(int weight){
  this->weight = weight;//(this->weight denotes for class member and obly weight declares for function parameter)
} 
};
int main() {
  //Object Creation

  //Static 
//   Animal ramesh;
//   ramesh.age=12;
//   ramesh.name="Lion";
//   cout<<"Age of ramesh is: "<<ramesh.age<<endl;
//   cout<<"Name of ramesh is: "<<ramesh.name<<endl;

//   ramesh.eat();
//   ramesh.sleep();
// //to private member
//   ramesh.setWeight(101);
//   cout<<"weight "<<ramesh.getWeight()<<endl;
  
  //Dynamic Memory
   Animal* suresh = new Animal;
  (*suresh).age=15;
  (*suresh).name="cat";

  //alternate-dynamic
  suresh->age=17;
  suresh->name="cat";

  suresh->eat();
  suresh->sleep();
}