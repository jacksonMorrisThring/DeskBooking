#ifndef OFFICE_H
#define OFFICE_H

#include <string>
#include "EmployeeDesk.h"
#include "Employee.h"
#include "Manager.h"

class Office{
public:
    std::string businessName;
    int num_offices;
    int num_desks;
    EmployeeDesk* desks;
    
    Office(std::string officeName);
    Office(std::string officeName, int num_desks);
    Office(std::string officeName, int some_num_offices, int num_desks);

    std::string getBusinessName();
    void setBusinessName(std::string newName);

    void setDeskNumber(int number_of_desks);
    int getDeskNumber();

    void printDeskDetails();

    bool addEmployeeToDesk(Employee an_emp);
    bool addManagerToDesk(Manager a_manager);

    ~Office();
};
#endif