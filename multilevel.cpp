#include <iostream>
#include <cstring>  
using namespace std;

class Employee {
protected:
    char name[50];      
    int empID;
    char department[50]; 

public:
   
    Employee(const char* n, int id, const char* dept) : empID(id) {
        strcpy(name, n);         
        strcpy(department, dept);  
    }

    void displayEmployeeDetails() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << empID << endl;
        cout << "Department: " << department << endl;
    }
};

class Manager : public Employee {
protected:
    int teamSize;

public:
    Manager(const char* n, int id, const char* dept, int teamSize) 
        : Employee(n, id, dept), teamSize(teamSize) {}

    void displayManagerDetails() {
        displayEmployeeDetails();
        cout << "Team Size: " << teamSize << endl;
    }
};

class TeamLead : public Manager {
private:
    char projectName[50]; 

public:
    
    TeamLead(const char* n, int id, const char* dept, int teamSize, const char* projName) 
        : Manager(n, id, dept, teamSize) {
        strcpy(projectName, projName);  
    }

    void displayTeamLeadDetails() {
        displayManagerDetails();
        cout << "Project Name: " << projectName << endl;
    }
};

int main() {
    TeamLead teamLead("Jane doe", 12345, "Software Development", 8, "Project Phoenix");

    teamLead.displayTeamLeadDetails();

    return 0;
}