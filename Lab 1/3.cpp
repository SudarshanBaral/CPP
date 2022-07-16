#include <iostream>
#include <math.h>
using namespace std;
int main () {
	int a,b,result;
	cout <<"Enter cofficient: ";
	cin >> a;
	cout <<"Enter power: ";
	cin>>b;
	    result = pow(a, b);

    cout << a << "^" << b<< " = " << result;	
    return 0;
}

