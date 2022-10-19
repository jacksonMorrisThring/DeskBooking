#include "Project.h"
#include "Office.h"
#include "EmployeeDesk.h"
#include "ManagerDesk.h"
#include "Employee.h"
#include "Manager.h"
#include "CEO.h"
#include <iostream>

int main(){
    // First prompt. Automated inputs use an input value of 2, user oriented entering hits 1
    int input;
    std::cout << "Press 1 to create your own office!\n" << std::endl;
    std::cin >> input;

    if (input == 1)
    {
        // total Employees counter
        int employees = 0;

        // Setting up office
        std::string office_name;
        int num_sub_offices;
        int num_desks;
        
        std::cout << "Enter an office name" << std::endl;
        std::cin >> office_name;

        std::cout << "How many offices are there inside?" << std::endl; 
        std::cin >> num_sub_offices;

        std::cout << "How many desks are in the office open floor plan?" << std::endl; 
        std::cin >> num_desks;

        Office office(office_name, num_sub_offices, num_desks);
        std::cout << "Office created! Next step, the CEO...\n" << std::endl;

        // Making the employees (CEO, HR manager, Manager, 2 employees)
        std::string CEO_name;
        int CEO_salary;
        int number_of_projects;

        std::cout << "Enter the name of the CEO (first name is fine)" << std::endl;
        std::cin >> CEO_name;

        std::cout << "Enter " << CEO_name << "'s salary" << std::endl;
        std::cin >> CEO_salary;

        std::cout << "Enter the total number of projects that " << office.getBusinessName() << " is currently contracted on"<< std::endl;
        std::cin >> number_of_projects;

        CEO a_ceo(CEO_name, CEO_salary, "Cheif Executive Officer", number_of_projects);
        std::cout << "CEO created! Next step, the HR manager\n" << std::endl;
        employees++;

        // Making the HR
        std::string HR_name;
        int HR_salary;
        std::string HR_title = "Human Resoruces";
        std::string HR_project_name = "Null";
        bool isHR = true;

        std::cout << "Enter the name of the HR" << std::endl;
        std::cin >> HR_name;
        
        std::cout << "Enter " << HR_name << "'s salary" << std::endl;
        std::cin >> HR_salary;


        Manager HR(HR_name, HR_salary, HR_title, HR_project_name, isHR);
        std::cout << "Human Resources manager created! Next step, the technical managers\n" << std::endl;
        employees++;

        // Counter for a for loop to create as many managers as needed
        int manager_counter;
        std::cout << "How many managers does " << office.getBusinessName() << " have?" << std::endl;
        std::cin >> manager_counter;

        // Tehnical manager
        std::string manager_name;
        int salary;
        std::string title;
        std::string project_name;
        isHR = false;

        Manager m_array[manager_counter];

        // For loop to create as many managers as needed
        for (int i = 0; i < manager_counter; i++)
        {
            std::cout << "Enter the name of the Manager" << std::endl;
            std::cin >> manager_name;

            std::cout << "Enter " << manager_name << "'s salary" << std::endl;
            std::cin >> salary;

            std::cout << "Enter " << manager_name << "'s title" << std::endl;
            std::cin >> title;

            std::cout << "What project is " << manager_name << " allocated to?" << std::endl;
            std::cin >> project_name;

            Manager manager(manager_name, salary, title, project_name, isHR);
            m_array[i] = manager;
            std::cout << "\nManager created!" << std::endl; 
            employees++;
        }
        
        std::cout << "Next step, the employees\n" << std::endl;

        // Employees
        int employee_counter;
        std::cout << "How many employees (working under managers) does " << office.getBusinessName() << " have?" << std::endl;
        std::cin >> employee_counter;

        std::string employee_name;
        bool isSupervisor;
        std::string isSupervisorString;
        std::string employee_title;

        Employee e_array[employee_counter];

        // For loop to create as many managers as needed
        for (int i = 0; i < employee_counter; i++)
        {
            std::cout << "Enter the name of the Employee" << std::endl;
            std::cin >> employee_name;
            
            std::cout << "Enter " << employee_name << "'s salary" << std::endl;
            std::cin >> salary;
            
            std::cout << "Enter " << employee_name << "'s title" << std::endl;
            std::cin >> employee_title;

            std::cout << "What project are they on?" << std::endl;
            std::cin >> project_name;

            std::cout << "Is " << employee_name << " a supervisor? Enter yes or no" << std::endl;
            std::cin >> isSupervisorString;

            if (isSupervisorString == "yes")
            {
                isSupervisor = true;
            }
            else if(isSupervisorString == "no")
            {
                isSupervisor = false;
            }

            Employee e1(employee_name, salary, employee_title, project_name, isSupervisor);
            std::cout << "Employee created!\n" << std::endl;

            e_array[i] = e1;
            employees++;

            // Printing the details as you create the employees
            std::cout << "\nPRINTING DETAILS\n" << std::endl;
            std::cout << office.getBusinessName() << " has a total of " << employees << " employees." << std::endl;
            std::cout << "CEO: " << a_ceo.getName() << std::endl;
            std::cout << "HR: " << a_ceo.getName() << std::endl;
            std::cout << "Managers:" << std::endl;
            for (int i = 0; i < manager_counter; i++)
            {
                std::cout << "Manager #" << i << ": " << m_array[i].getName() << std::endl;
            }

            std::cout << "Employees:" << std::endl;

            for (int i = 0; i < employee_counter; i++)
            {
                std::cout << "Employee #" << i << ": " << e_array[i].getName() << std::endl;
            }
            std::cout << std::endl;
        }

        // Filling the desks
        std::cout << "\nWho is in the office today?" << std::endl;
        
        // Flag 1 is flipped to true when the desks are all full
        bool flag = false;
        int counter = 0;

        while (flag == false)
        {
            // Flag 2 is used to hold the return value of adding the employee to the desk (worked or didnt work)
            bool flag2;

            // Manager flag is used to know whether a manager is getting added
            bool manager_flag;

            std::cout << "Do you want to add a Manager or an Employee to the open floor plan? Enter 1 for Manager, 0 for Employee" << std::endl;
            std::cin >> manager_flag;

            std::string name;
            std::cout << "Enter the name of the person you want to add to the open floor roster" << std::endl;
            std::cin >> name;

            if (manager_flag == true)
            {
                for (int i = 0; i < manager_counter; i++)
                {
                    if (m_array[i].name == name)
                    {
                        flag2 = office.addManagerToDesk(m_array[i]);
                        if (flag2 == false)
                        {
                            std::cout << "Office plan full for today! Enjoy the day at work!" << std::endl;
                            flag = true;
                        }
                        
                    }
                }
            }
            else if (manager_flag == false)
            {
                for (int i = 0; i < employee_counter; i++)
                {
                    if (e_array[i].name == name)
                    {
                        flag2 = office.addEmployeeToDesk(e_array[i]);
                        if (flag2 == false)
                        {
                            std::cout << "Office plan full for today! Enjoy the day at work!" << std::endl;
                            flag = true;
                        }
                        
                    }
                }
            }
            

            if (flag == false){
                if (flag2 == true)
                {
                    office.printDeskDetails();

                    std::string answer;
                    std::cout << "\nDo you want to add another employee to the desk roster? (enter yes or no)" << std::endl;
                    std::cin >> answer;

                    if (answer == "no")
                    {
                        flag = true;
                    }
                }
            }
            
        } 
    }

    else if (input == 2)
    {
        // total Employees counter
        int employees = 0;

        // Setting up office
        std::string office_name;
        int num_sub_offices;
        int num_desks;
        
        std::cin >> office_name;
        std::cin >> num_sub_offices;
        std::cin >> num_desks;

        Office office(office_name, num_sub_offices, num_desks);

        // Making the employees (CEO, HR manager, Manager, 2 employees)
        std::string CEO_name;
        int CEO_salary;
        int number_of_projects;

        std::cin >> CEO_name;
        std::cin >> CEO_salary;
        std::cin >> number_of_projects;

        CEO a_ceo(CEO_name, CEO_salary, "Cheif Executive Officer", number_of_projects);
        employees++;

        // HR
        std::string HR_name;
        int HR_salary;
        std::string HR_title = "Human Resoruces";
        std::string HR_project_name = "Null";
        bool isHR = true;

        std::cin >> HR_name;
        std::cin >> HR_salary;

        Manager HR(HR_name, HR_salary, HR_title, HR_project_name, isHR);
        employees++;

        // Counter for a for loop to create as many managers as needed
        int manager_counter;

        std::cin >> manager_counter;

        // Tehnical manager
        std::string manager_name;
        int salary;
        std::string title;
        std::string project_name;
        isHR = false;

        Manager m_array[manager_counter];

        // For loop to create as many managers as needed
        for (int i = 0; i < manager_counter; i++)
        {
            std::cin >> manager_name;
            std::cin >> salary;
            std::cin >> title;
            std::cin >> project_name;

            Manager manager(manager_name, salary, title, project_name, isHR);
            m_array[i] = manager;
            employees++;
        }
        // Employees
        int employee_counter;
        std::cin >> employee_counter;

        std::string employee_name;
        bool isSupervisor;
        std::string isSupervisorString;
        std::string employee_title;

        Employee e_array[employee_counter];

        // For loop to create as many managers as needed
        for (int i = 0; i < employee_counter; i++)
        {
            std::cin >> employee_name;
            std::cin >> salary;
            std::cin >> employee_title;
            std::cin >> project_name;
            std::cin >> isSupervisorString;

            if (isSupervisorString == "yes")
            {
                isSupervisor = true;
            }
            else if(isSupervisorString == "no")
            {
                isSupervisor = false;
            }

            Employee e1(employee_name, salary, employee_title, project_name, isSupervisor);

            e_array[i] = e1;
            employees++; 

            std::cout << "\nPRINTING DETAILS\n" << std::endl;
            std::cout << office.getBusinessName() << " has a total of " << employees << " employees." << std::endl;
            std::cout << "CEO: " << a_ceo.getName() << std::endl;
            std::cout << "HR: " << HR.getName() << std::endl;
            std::cout << "Managers:" << std::endl;
            for (int i = 0; i < manager_counter; i++)
            {
                std::cout << "Manager #" << i << ": " << m_array[i].getName() << std::endl;
            }

            std::cout << "Employees:" << std::endl;

            for (int i = 0; i < employee_counter; i++)
            {
                std::cout << "Employee #" << i << ": " << e_array[i].getName() << std::endl;
            }
            std::cout << std::endl;
        }  
        bool flag = false;
        int counter = 0;

        while (flag == false)
        {
            bool flag2;
            bool manager_flag;
        
            std::cin >> manager_flag;

            std::string name;
            std::cin >> name;

            if (manager_flag == true)
            {
                for (int i = 0; i < manager_counter; i++)
                {
                    if (m_array[i].name == name)
                    {
                        
                        flag2 = office.addManagerToDesk(m_array[i]);
                        if (flag2 == false)
                        {
                            std::cout << "Office plan full for today! Enjoy the day at work!" << std::endl;
                            flag = true;
                        }
                        
                    }
                }
            }
            else if (manager_flag == false)
            {
                for (int i = 0; i < employee_counter; i++)
                {
                    if (e_array[i].name == name)
                    {
                        flag2 = office.addEmployeeToDesk(e_array[i]);
                        if (flag2 == false)
                        {
                            std::cout << "Office plan full for today! Enjoy the day at work!" << std::endl;
                            flag = true;
                        }
                        
                    }
                }
            }

            if (flag == false){
                if (flag2 == true)
                {
                    office.printDeskDetails();
                    
                    std::string answer;
                    std::cout << "\nDo you want to add another employee to the desk roster? (enter yes or no)" << std::endl;
                    std::cin >> answer;

                    if (answer == "no")
                    {
                        flag = true;
                    }
                }
            }
            
        } 
    }
    else
    {
        std::cout << "invalid input" << std::endl;
    }

    return 0;
}