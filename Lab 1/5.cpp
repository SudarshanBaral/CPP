#include <iostream>

using namespace std;

int add();  //function prototype
 
//main function 
int main()
{
 add();  //function calling (noarguements required as in prototype(prototype in line no 5))
}
int add(){    //called function function is void that means no returning need 
    int a,b,c;
    cout<<"Enter two numbers:"<<endl;
    cin>>a>>b;
    c=a+b;
    cout<<"The sum is = "<<c;
    return 0;
}
