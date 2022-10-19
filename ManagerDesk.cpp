#include "ManagerDesk.h"
#include <iostream>

ManagerDesk::ManagerDesk(){
    manager_name = "None";
}


void ManagerDesk::getManager(){
    if (manager_name == "None")
    {
        std::cout << "Desk is currently unoccupied" << std::endl;
    }
    else
    {
        std::cout << "This desk is currently occupied by " << manager_name << std::endl;
    }
}

bool ManagerDesk::isOccupied(){
    if(manager_name == "None"){
        return false;
    }
    return true;
}
// void setEmployee(Employee)