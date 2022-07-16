#include<iostream>
using namespace std;
class AddAmount
{
private:
int amount=50;
    
public:
    AddAmount(){
        cout<<"Nothing added"<<endl;
         cout<<"Amount="<<amount<<endl;
    };

    AddAmount(int a){
       amount=amount+a;
      
    }
   
};

int main(){
    AddAmount a,b(3000);
    return 0;
}


