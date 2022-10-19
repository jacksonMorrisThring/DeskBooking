#include "Project.h"
#include "Office.h"
#include "EmployeeDesk.h"
#include "ManagerDesk.h"
#include "Employee.h"
#include "Manager.h"
#include "CEO.h"
#include <iostream>

int main(){
    Project p1("Space Systems Analysis", 2500000);

    std::cout << "This project is named " << p1.getName() << ". The cost of " << 
            p1.getName() << " is " << p1.getCost() << std::endl; 

    Office o1("Kingfish");
    std::cout << o1.getBusinessName() << " created! It has a total of " << o1.num_offices << " offices for high level managers\n" << std::endl;

    Office o2("Kingfish", -1);
    std::cout << o1.getBusinessName() << " created! It has a total of " << o1.num_offices << " offices for high level managers\n" << std::endl;

    EmployeeDesk e1;
    std::cout << "Is the employee desk occupied?" << std::endl;
    e1.getEmployee();

    ManagerDesk m1;
    std::cout << "Is the manager desk occupied?" << std::endl;
    m1.getManager();

    Employee john("John", 80000, "Software Engineer", "Space Systems Analysis", false);
    std::cout << john.getName() << " is a " << john.getTitle() << ". He earns $" << john.getSalary() << std::endl; 

    Manager pete("Pete", 100000, "Lead Software Engineer", "Space Systems Analysis", false);
    std::cout << pete.getName() << " is a " << pete.getTitle() << ". He earns $" << pete.getSalary() << std::endl; 

    CEO mark("Pete", 200000, "Chief Executive Officer", 3);
    std::cout << mark.getName() << " is a " << mark.getTitle() << ". He earns $" << mark.getSalary() << std::endl; 

    return 0;
}