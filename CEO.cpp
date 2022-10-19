#include "CEO.h"
// #include "Worker.h"
#include <iostream>

CEO::CEO(){
    name = "?";
    salary = 0;
    title = "?";
    number_of_projects = 0;
}
CEO::CEO(std::string a_name, int salary, std::string title, int number_of_projects){
    name = a_name;
    this -> salary = salary;
    this -> title = title;
    this -> number_of_projects = number_of_projects;
}


std::string CEO::getName(){
    return name;
}

int CEO::getSalary(){
    return salary;
}
std::string CEO::getTitle(){
    return title;
}

void CEO::setName(std::string new_name){
    name = new_name;
}

void CEO::setSalary(int new_salary){
    salary = new_salary;
}
void CEO::setTitle(std::string new_title){
    title = new_title;
}

int CEO::getNumberOfProjects(){
    return number_of_projects;
}

void CEO::setNumberOfProjects(int new_proj_num){
    number_of_projects = new_proj_num;
}
