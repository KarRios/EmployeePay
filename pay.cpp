#include "person.cpp"
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

void readData(vector<Person> a);
void writeData(vector<Person> a);

int main(){
  vector<Person> employees;

  readData(employees);
  writeData(employees);

  return 0;
}

void readData(vector<Person> a){
  int num = 0;
  string fname,lname,trash;
  float pay, hours;
  ifstream Input;
  Input.open("input.txt");
  while(!Input.eof()){
    a.emplace_back(fname,lname,pay,hours);
    getline(Input,trash);
  }
  Input.close();
}

void writeData(vector<Person> a){
  ofstream output;
  output.open("output.txt");
  for(int i = 0;i < a.size(); ++i){
    output << a[i].fullName() << " " << a[i].totalPay() << "\n";
  }
}


