#ifndef WORKER_H
#define WORKER_H

#include <string>

class Worker{
public:
    // Worker();

    std::string name;
    // std::string last_name;
    int salary;
    std::string title;

    virtual std::string getName() = 0;
    virtual int getSalary() = 0;
    virtual std::string getTitle() = 0;

    virtual void setName(std::string new_name) = 0;
    virtual void setSalary(int new_salary) = 0;
    virtual void setTitle(std::string new_title) = 0;
};

#endif