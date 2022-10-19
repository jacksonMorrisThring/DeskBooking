all: Employee.cpp CEO.cpp EmployeeDesk.cpp Manager.cpp ManagerDesk.cpp Office.cpp Project.cpp main.cpp
	g++ Employee.cpp CEO.cpp EmployeeDesk.cpp Manager.cpp ManagerDesk.cpp Office.cpp Project.cpp main.cpp

test:
	./a.out < inputs_1.txt > output_1.txt
	diff correct_output.txt output_1.txt