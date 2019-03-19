#include "person.h"
Person::Person(){
  lastName = " ";
  firstName = " ";
  payRate = 0;
  hoursWorked = 0;
}

Person::Person(string firstName, string lastName, float payRate, float hoursWorked){
  this->firstName = firstName;
  this->lastName = lastName;
  this->payRate = payRate;
  this->hoursWorked = hoursWorked;
}

void Person::setLastName(string lName){
  lastName = lName;
}

string Person::getLastName(){
  return lastName;
}

void Person::setFirstName(string fName){
  firstName = fName;
}

string Person::getFirstName(){
  return firstName;
}

void Person::setPayRate(float rate){
  payRate = rate;
}

float Person::getPayRate(){
  return payRate;
}

void Person::setHoursWorked(float hours){
  hoursWorked = hours;
}

float Person::getHoursWorked(){
  return hoursWorked;
}

float Person::totalPay(){
  float totalPay = getPayRate() * getHoursWorked();
  return totalPay;
}

string Person::fullName(){
  string fullName =  getFirstName() + " " + getLastName();
  return fullName;
}
