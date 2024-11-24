#include <iostream>
 #include <string>
 using namespace std; 
 
class Student {
 
    string name;
    int roll_no;
    string department;
    int marks;
 public:
    void getData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> roll_no;
        cout << "Enter department: ";
        cin >> department;
        cout << "Enter marks: ";
        cin >> marks;
    }
 
    void passbyobjvalue(Student obj) {
       
        obj.marks += 10;
        cout<<"Inside function"<<endl;
        obj.display();
    }
     void passbyobjreference(Student &obj) {
       
        obj.marks += 10;
        cout<<"<<-------Inside function------->>"<<endl;
        obj.display();
    }
    void display(){
        cout << "name: ";
        cout << name << endl;
        cout << " roll number: ";
        cout << roll_no<< endl;
        cout << " department: ";
        cout << department<< endl;
        cout << "marks: ";
        cout << marks<< endl;
    }
        
    
};
 
void passByValue(int value) {
   
    value += 10;
    cout << "Value of marks inside pass by value function: " << value << endl;
 }
 
void passByReference(int &value) {
   
    value += 10;
    cout << "Value of marks inside pass by reference function: " << value << endl;
 }
 
int main() {
    Student stobj;
    stobj.getData();
 
    int sum = 10;
     cout << "Value of marks passed to the pass by value function: " << sum << endl;
    passByValue(sum);
    cout << "Value of marks returned from pass by value: " << sum << endl;
   cout << "Value of marks passed to the pass by reference function: " << sum << endl;
    passByReference(sum);
    cout << "Value of marks returned from pass by reference: " << sum << endl;
    cout<<"Before passbyobjvalue function"<<endl;
    stobj.display();
    stobj.passbyobjvalue(stobj);
        cout<<"after passbyobjvalue function"<<endl;

    stobj.display();
        cout<<"Before passbyobjreference function"<<endl;

    stobj.passbyobjreference(stobj);
            cout<<"after passbyobjreference function"<<endl;

    stobj.display();
    
       return 0;
 }