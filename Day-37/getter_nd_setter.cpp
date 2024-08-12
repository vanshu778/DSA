#include <iostream>
#include <string>
using namespace std;

class animal{
string name="Vanshika";
public:
string getName(){
  return name;
}
void SetName(string newName){
  name = newName;
}
};
int main() {
  animal ramesh;
  //cout<<ramesh.name;
  cout<<ramesh.getName()<<endl;
  ramesh.SetName("Lion");
  cout<<ramesh.getName();
}