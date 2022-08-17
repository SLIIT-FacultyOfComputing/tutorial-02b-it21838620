/*Exercise 2 - Selection

Convert the C program given below which calculates an employee's salary to a C++ program.

Input Type, Salary, otHours

Type = 1
OtRate = 1000
Type = 2
OtRate = 1500
Type = 3
OtRate = 1700
Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/
//header file
#include <iostream>

using namespace std;
int main(){
  //variable diclaration
  int empType,basicSalary,otHours,otRate,totalSalary;
  //getting inputs form the user
  cout<<"Enter employee type :";
  cin>>empType;
  cout<<"Enter employee basic salary:";
  cin>>basicSalary;
  cout<<"Enter ot hours:";
  cin>>otHours;

  switch(empType){
    case 1:
      otRate = otHours *1000;
      break;
    case 2:
      otRate = otHours *1500;
      break;
    case 3:
      otRate = otHours *1700;
      break;
  }

  totalSalary = otRate + basicSalary;
  cout<<"Total Salary :"<<totalSalary<<endl;

  return 0;

}  
