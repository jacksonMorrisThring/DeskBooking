#ifndef PROJECT_H
#define PROJECT_H

#include <string>

class Project {
public: 
    float projectCost;
    std::string projectName;

    Project(std::string name, float cost);

    std::string getName();
    void setName(std::string name);

    float getCost();
    void setCost(float cost);
};

#endif
