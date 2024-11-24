#include <iostream>
#include <string>
using namespace std;

class staff {
    char name[50];
    int staffID;
    char department[50];

public:
    void getdetailsStaff() {
        cout << "Enter the name of the staff: ";
cin>>name;
        cout << "Enter the staff ID: ";
        cin >> staffID;
        cout << "Enter the department: ";
        cin>>department;
    }

    void displayStaffDetails() {
        cout << "Staff Name: " << name << endl;
        cout << "Staff ID: " << staffID << endl;
        cout << "Department: " << department << endl;
    }
};

class faculty : public staff {
    char subject[50];

public:
    void getdetailsFaculty() {
        getdetailsStaff();
        cout << "Enter the subject: ";
cin>>subject;
    }

    void manageCourse() {
        cout << "Managing course materials for: " << subject << endl;
    }

    void displaydetailsFaculty() {
        displayStaffDetails();
        cout << "Subject: " << subject << endl;
        manageCourse();
    }
};

class administrative : public staff {
    char role[50];

public:
    void getdataAdmin() {
        getdetailsStaff(); 
        cout << "Enter the role: ";
        cin>>role;}

    void performadmintasks() {
        cout << "Performing administrative tasks as: " << role << endl;
    }

    void displayAdminDetails() {
        displayStaffDetails();
        cout << "Role: " << role << endl;
        performadmintasks();
    }
};

int main() {
    faculty faculty1;
    cout << "Enter the details of the faculty: " << endl;
    faculty1.getdetailsFaculty();

    administrative admin1;
    cout << "Enter the details of the administrative staff: " << endl;
    admin1.getdataAdmin();

    cout << "\nDetails of the faculty: " << endl;
    faculty1.displaydetailsFaculty();

    cout << "\nDetails of the administrative staff: " << endl;
    admin1.displayAdminDetails();

    return 0;
}
