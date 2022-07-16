#include <iostream>

using namespace std;

class A{
	int a_feet,a_inches;
	public:
		int getFeet(){
			return a_feet;
		}
		int getInch(){
			return a_inches;
		}
	 void input() {
	 	cout<<"Enter number in feet: ";
	 	cin>>a_feet;
	 	cout<<"Enter number in inch: ";
	 	cin>>a_inches;
	 	
	 }
	 
};

class B{
	int b_feet,b_inches;
	public:
		int getFeet(){
			return b_feet;
		}
		int getInch(){
			return b_inches;
		}
	 void input() {
	 	cout<<"Enter number in feet: ";
	 	cin>>b_feet;
	 	cout<<"Enter number in inch: ";
	 	cin>>b_inches;
	 	
	 }
	 
};


int main(){
	A x;
	x.getFeet();
	x.getInch();
	x.input();
	B y;
	y.getFeet();
	y.getInch();
	y.input();
	
	int inch = (x.getInch()+y.getInch());
	int feet = inch/12;
	inch = inch-(12*feet);
	feet = (x.getFeet()+y.getFeet()+feet);
	cout<<"Length is "<<feet<<" feet and "<<inch<<" inches"<<endl;
}
