#ifndef MANAGERDESK_H
#define MANAGERDESK_H

#include "Desk.h"
#include <string>

class ManagerDesk : public Desk{
public:
    std::string manager_name;

    ManagerDesk();

    // Behaviour
    void getManager();  // prints a message of who is there, if no one, prints descriptive message
    // void setEmployee(Employee);

    virtual bool isOccupied();

    // Employee* getEmployees();
};

#endif