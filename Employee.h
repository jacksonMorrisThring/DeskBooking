#ifndef EMPLOYEE_H
#define EMPLOYEE_H

// #include <string>
#include "Worker.h"

class Employee : public Worker{
public:
     
    Employee();
    Employee(std::string a_name, int salary, std::string title, std::string a_project_name, bool isSupervisor);

    std::string project_name;
    bool isSupervisor;

    std::string getProject();
    void setProject(std::string new_project);

    bool getSupervisorData();
    void setSupervisorData(bool new_val);

    // Worker functions
    virtual std::string getName();
    virtual int getSalary();
    virtual std::string getTitle();

    virtual void setName(std::string new_name);
    virtual void setSalary(int new_salary);
    virtual void setTitle(std::string new_title);


};

#endif