#include "Office.h"
#include "Employee.h"
#include "Manager.h"
#include "EmployeeDesk.h"
#include <iostream>


Office::Office(std::string officeName, int some_num_offices){
    businessName = officeName;

    if (num_offices < 2)
    {
        std::cout << "You entered a sub-room number less than 2, minimum value is 2\nTherefore, weve set office number to 2" << std::endl;
        num_offices = 2;
    }
    else
    {
        num_offices = some_num_offices;
    }    
}

Office::Office(std::string officeName)
{
    businessName = officeName;
}

Office::Office(std::string officeName, int some_num_offices, int num_desks){
    businessName = officeName;

    if (num_offices < 2)
    {
        std::cout << "You entered a sub-room number less than 2, minimum value is 2\nTherefore, weve set office number to 2" << std::endl;
        num_offices = 2;
    }
    else
    {
        num_offices = some_num_offices;
    }

    // Sets desk array on heap
    this -> num_desks = num_desks;
    desks = new EmployeeDesk[num_desks];
}

std::string Office::getBusinessName(){
    return businessName;
}

void Office::setBusinessName(std::string newName){
    businessName = newName;
}

void Office::setDeskNumber(int desk_num){
    num_desks = desk_num;
}
    
int Office::getDeskNumber(){
    return num_desks;
}

void Office::printDeskDetails(){
    std::cout << "Total of " << num_desks << " Desks..." << std::endl;
    for (int i = 0; i < num_desks; i++)
    {
        if (desks[i].isOccupied() == false)
        {
            std::cout << "Desk #" << i+1 << " is not occupied" << std::endl;
        }
        else
        {
            desks[i].getEmployee();
        }
    }
}

bool Office::addEmployeeToDesk(Employee an_emp){
    bool flag = false;
    
    // Iterates through desks, if theres a free desk, add the employee to it
    for (int i = 0; i < num_desks; i++)
    {
        if (desks[i].isOccupied() == false)
        {
            desks[i].setEmployee(an_emp);
            flag = true;
            std::cout << "\n" << an_emp.name << " was successfully booked in!\n" << std::endl;
            return true;
        }
    }
    std::cout << an_emp.name << " couldnt be added to the office plan\n" << std::endl;
    return false;
}

bool Office::addManagerToDesk(Manager a_manager){
    bool flag = false;

    // Similar to add employee to desk
    for (int i = 0; i < num_desks; i++)
    {
        if (desks[i].isOccupied() == false)
        {
            desks[i].setManager(a_manager);
            flag = true;
            std::cout << "\n" << a_manager.name << " was successfully booked in!\n" << std::endl;
            return true;
        }
    }
    std::cout << a_manager.name << " couldnt be added to the office plan\n" << std::endl;
    return false;
}

Office::~Office(){
    // Free the allocated memory
    delete[] desks;
}