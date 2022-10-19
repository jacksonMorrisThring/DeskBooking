#ifndef CEO_H
#define CEO_H

#include "Worker.h"

class CEO : public Worker{
public:
    CEO();
    CEO(std::string a_name, int salary, std::string title, int number_of_projects);

    // std::string project_name; // array of projects
    int number_of_projects;

    // std::string getProject();
    // void setProject(std::string new_project);

    // bool getSupervisorData();
    // void setSupervisorData(bool new_val);
    int getNumberOfProjects();
    void setNumberOfProjects(int new_proj_num);


    // Worker functions
    virtual std::string getName();
    virtual int getSalary();
    virtual std::string getTitle();

    virtual void setName(std::string new_name);
    virtual void setSalary(int new_salary);
    virtual void setTitle(std::string new_title);


};

#endif