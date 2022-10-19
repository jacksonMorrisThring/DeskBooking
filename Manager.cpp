#include "Manager.h"
// #include "Worker.h"
#include <iostream>

Manager::Manager(){
    name = "?";
    salary = 0;
    title = "?";
    project_name = "?";
    isHR = false;

}
Manager::Manager(std::string a_name, int salary, std::string title, std::string a_project_name, bool isHR){
    name = a_name;
    this -> salary = salary;
    this -> title = title;
    project_name = a_project_name;
    this -> isHR = isHR;
}


std::string Manager::getName(){
    return name;
}

int Manager::getSalary(){
    return salary;
}
std::string Manager::getTitle(){
    return title;
}

void Manager::setName(std::string new_name){
    name = new_name;
}

void Manager::setSalary(int new_salary){
    salary = new_salary;
}
void Manager::setTitle(std::string new_title){
    title = new_title;
}

std::string Manager::getProject(){
    return project_name;
}
void Manager::setProject(std::string new_project){
    project_name = new_project;
}

bool Manager::getHR(){
    return isHR;
}

void Manager::setAsHR(bool isHRData){
    isHR = isHRData;
}