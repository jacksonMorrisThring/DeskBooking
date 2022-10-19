#include "Employee.h"
// #include "Worker.h"
#include <iostream>

Employee::Employee(){
    name = "?";
    salary = 0;
    title = "?";
    project_name = "?";
    isSupervisor = false;

}
Employee::Employee(std::string a_name, int salary, std::string title, std::string a_project_name, bool isSupervisor){
    name = a_name;
    this -> salary = salary;
    this -> title = title;
    project_name = a_project_name;
    this -> isSupervisor = isSupervisor;
}


std::string Employee::getName(){
    return name;
}

int Employee::getSalary(){
    return salary;
}
std::string Employee::getTitle(){
    return title;
}

void Employee::setName(std::string new_name){
    name = new_name;
}

void Employee::setSalary(int new_salary){
    salary = new_salary;
}
void Employee::setTitle(std::string new_title){
    title = new_title;
}

std::string Employee::getProject(){
    return project_name;
}
void Employee::setProject(std::string new_project){
    project_name = new_project;
}

bool Employee::getSupervisorData(){
    return isSupervisor;
}

void Employee::setSupervisorData(bool supervisor_data){
    isSupervisor = supervisor_data;
}