#include<iostream>

using namespace std;

class XYZ;      
class ABC{
    int num;           //private data member
        public:
        void input()    //accepting input
        {
            cout<<"Enter the first number: ";
            cin>>num;
        }
        friend void max(ABC a,XYZ x);   //calls max func with its class and another class as a friend
};
class XYZ{
    int num;           //private data member
    public:
        void input()
        {
            cout<<"Enter the second number: ";
            cin>>num;
        }
        friend void max(ABC a,XYZ x);     //calls max func with its class and another class as a friend
};
void max(ABC a,XYZ b)     //the function which is called as friend to find the max "among two classes" ABC XYZ as objects a and x
{
//        cout<<"The sum is = "<<a.num1+b.num2;   //adding two numbers coming from class ABC as object a and variable num1 as a.num1
    if(a.num>b.num) {
    	cout<<a.num<<" (First number) is greater"<<endl;
    } else{
    	cout<<b.num<<" (Second number) is greater"<<endl;
	}
	};





int main()
{
    ABC a;                //class object a
    XYZ x;               //class object x
    a.input();          //calling input function for class a 
    x.input();         //calling output function for class x
    max(a,x);         //calling max functions passing objects as a and x 
    return 0;
}
