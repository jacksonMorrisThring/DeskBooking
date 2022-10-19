#include "Project.h"

Project::Project(std::string name, float cost){
    projectName = name;
    projectCost = cost;
}

std::string Project::getName(){
    return projectName;
}
void Project::setName(std::string name){
    projectName = name;
}

float Project::getCost(){
    return projectCost;
}
void Project::setCost(float cost){
    projectCost = cost;
}