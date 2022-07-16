#include <iostream>

using namespace std;

int main()
{
    int i,num,counter=0;

    cout << "Enter the number:" <<endl;
    cin>>num;

    for (i=1;i<=num;i++){
         if (num%i==0){
        counter++;
    }                                     
	}
    if (counter==2){                         
        cout<<"The number is prime"<<endl;  
    }
    else if (counter>2){
        cout<<"The number is composite"<<endl;
    } else{
    	cout<<"Neither";
	}

    return 0;
}
