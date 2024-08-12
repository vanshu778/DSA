#include <iostream>
using namespace std;

class student{
private:
string gf;
string bf;
void Chatting(string name){
  cout<<"Chatting"<<name<<endl;
}

public:
int id;
string name;
int age;
string gender;

//default:assign garbage value
student(){
  cout<<"Default called"<<endl;
}

//parameterized1: assign sensible value
student(int _id, string _name, int _age, string _gender, string _gf){
  id = _id;
  name = _name;
  age = _age;
  gender = _gender;
  gf = _gf;
  cout<<"Parameterized 1 called for "<<name<<endl;
  Chatting(name);
}

//Parameterized2: assign sensible value
student(int _id, string _name, string _gender, string _bf){
  id = _id;
  name = _name;
  gender = _gender;
  bf = _bf;
  cout<<"Parameterized 2 called for "<<name<<endl;
  Chatting(name);
}

void study(){
  cout<<"Studying"<<endl;
}
};
int main() {
  student s1(104,"Love",25,"Male","Lovely");
  cout<<s1.name<<endl;
  student s2(105,"Lovely","Female","Love");
  cout<<s2.name<<endl;
  return 0;
}