#include "EmployeeDesk.h"
#include "Employee.h"
#include <iostream>

EmployeeDesk::EmployeeDesk(){
    employee_name = "None";
}


void EmployeeDesk::getEmployee(){
    if (employee_name == "None")
    {
        std::cout << "Desk is currently unoccupied" << std::endl;
    }
    else
    {
        std::cout << "This desk is currently occupied by " << employee_name << std::endl;
    }
}

bool EmployeeDesk::isOccupied(){
    if(employee_name == "None"){
        return false;
    }
    return true;
}

void EmployeeDesk::setEmployee(Employee an_emp){
    employee_name = an_emp.getName();
}

void EmployeeDesk::getManager(){
    if (employee_name == "None")
    {
        std::cout << "Desk is currently unoccupied" << std::endl;
    }
    else
    {
        std::cout << "This desk is currently occupied by " << employee_name << std::endl;
    }
}

void EmployeeDesk::setManager(Manager a_manager){
    employee_name = a_manager.getName();
}