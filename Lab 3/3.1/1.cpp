#include <iostream>

using namespace std;

class car{
     char name;
     int model;
 public:
    int horsePower;
    int getHorsePower(int a){
       return a;
    }
    void sethorsePower(){
       horsePower = a;
    }
    string getName(string b){
      return b;
    }
    void setName(){
      name = b;
    }

    int getModel(int c){
      return c;
      }
    void setModel(){
     model= c;
    }
};


int main()
{
    car c;
    string name;
    int model,horsepower;
    cout<<"Enter the model:"<<endl;
    cin>>model;
    cout<<"Enter the name:"<<endl;
    cin>>name;
    cout<<"Enter the power:"<<endl;
    cin>>horsepower;
    //c.setModel(model);
     cout<<"The name of the car is = "<<c.getName(name)<<endl;
    cout <<"The model of the car is = "<<c.getModel(model)<<endl;
    cout<<"The horse power of the car is = "<<c.getHorsePower(horsePower)<<endl;

    return 0;
}
