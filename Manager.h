#ifndef MANAGER_H
#define MANAGER_H

#include "Worker.h"


class Manager : public Worker{
public:
    std::string project_name;
    bool isHR;  // Differentiates betwwen the human resources vs regular manager

    Manager();
    Manager(std::string a_name, int salary, std::string title, std::string a_project_name, bool isHR);

    std::string getProject();
    void setProject(std::string new_project);

    bool getHR();
    void setAsHR(bool new_val);

    // Worker functions
    virtual std::string getName();
    virtual int getSalary();
    virtual std::string getTitle();

    virtual void setName(std::string new_name);
    virtual void setSalary(int new_salary);
    virtual void setTitle(std::string new_title);
};

#endif