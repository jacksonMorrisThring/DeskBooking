#ifndef EMPLOYEEDESK_H
#define EMPLOYEEDESK_H

#include "Desk.h"
#include "Employee.h"
#include "Manager.h"
#include <string>

class EmployeeDesk : public Desk{
public:
    std::string employee_name;

    EmployeeDesk();

    // Behaviour
    void getEmployee();  // prints a message of who is there, if no one, prints descriptive message
    void setEmployee(Employee a_emp);

    void getManager();
    void setManager(Manager a_manager);

    virtual bool isOccupied();

};

#endif