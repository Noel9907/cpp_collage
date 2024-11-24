#include <iostream>
#include <cstring>  
using namespace std;

class Complex{
float real, imag;
public:
Complex operator +(const Complex &c){
Complex temp;
temp.real=real+c.real;  
temp.imag=imag+c.imag;
return temp;
}
Complex operator -(const Complex &c){
Complex temp;   
temp.real=real-c.real;
temp.imag=imag-c.imag;
return temp;
}
void display(){
cout<<real<<"+i"<<imag<<endl;
}
void setvalues(){
cout<<"Enter real part: ";
cin>>real;
cout<<"Enter imaginary part: ";
cin>>imag;
}
};
int main(){
Complex c1,c2,c3,c4;
cout<<"Enter first complex number: "<<endl;
c1.setvalues();
cout<<"Enter second complex number: "<<endl;
c2.setvalues();
c3=c1+c2;
c4=c1-c2;
cout<<"Sum of two complex numbers: ";
c3.display();
cout<<"Difference of two complex numbers: ";
c4.display();
return 0;
}