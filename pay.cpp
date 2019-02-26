#include "person.cpp"
#include <iostream>
#include <fstream>
using namespace std;

int size();
void readData(Person a[],int size);
void writeData(Person a[],int size);

int main(){
  Person employees[20];

  readData(employees,20);
  writeData(employees,20);

  return 0;
}

void readData(Person a[],int size){
  int num = 0;
  string fname,lname,trash;
  float pay, hours;
  ifstream Input;
  Input.open("input.txt");
  for(int i = 0; i < size; ++i){
    Input >> fname >> lname >> pay >> hours;
    getline(Input,trash);
    a[i].setFirstName(fname);
    a[i].setLastName(lname);
    a[i].setPayRate(pay);
    a[i].setHoursWorked(hours);
  }
  Input.close();
}

void writeData(Person a[],int size){
  ofstream output;
  output.open("output.txt");
  output << a[0].fullName() << " " << a[0].totalPay() << "\n";
  for(int i = 1; i < size; ++i){
    if(a[i].fullName() == a[i-1].fullName()){
      break;
    }
    
    output << a[i].fullName() << " " << a[i].totalPay() << "\n";
  }
}


