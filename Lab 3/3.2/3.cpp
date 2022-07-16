#include<iostream>

using namespace std;


class sample
{
    float value1,value2;
    public:
    sample()
    {
        cout<<"Enter the value :";
        cin>>value1>>value2;
    }
    friend void mean(sample c);   
};


void mean(sample c)
{
    float sum = (c.value1+c.value2)/2;
    cout<<"The mean is = "<<sum;
}
int main()
{
    sample c;

    mean(c);
}
