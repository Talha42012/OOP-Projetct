#include <iostream>
#include <fstream>
#include <iomanip>
#include "Employee.h"
using namespace std;

class Emp_Interface : public Employee
{

public:

void Login(){
    EmpLogin(); 
}

};

int main(){
    Emp_Interface obj;
    obj.EmpLogin();
}