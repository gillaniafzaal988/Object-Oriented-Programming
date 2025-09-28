#include "Student.h"
#include "Employee.h"
#include "Developer.h"
#include "Photocopier.h"

int main(){
	//task01(student.h)
	Student s("afzaal",20,888);
	s.display_student_info();
	//task02(Employee.h)
	Manager M("software","afzaal",13,666);
	M.display_manager();
	//task 03 (hierarchical inheritance)
    Developer d;
    cout << "\nEnter Developer Details:\n";
    d.setName();
    d.setSalary();
    d.setProgrammingLanguage();

    cout << "\n--- Developer Info ---" << endl;
    d.displayDeveloper();

    Designer g;
    cout << "\nEnter Designer Details:\n";
    g.setName();
    g.setSalary();
    g.setDesignTool();

    cout << "\n--- Designer Info ---" << endl;
    g.displayDesigner();
    
    //task 04(multiple inheritance)
    Photocopier p;
    p.setDeviceName();
    p.setPagesToPrint();
    p.setPagesToScan();
    p.startPhotocopy();

	return 0;
}
