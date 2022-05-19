/* Use of Hybrid or Virtual inheritance */
#include<iostream>
using namespace std;

class Vehicle {
    public:
    Vehicle(){
        cout<<" This is a transport vehicle"<<endl;
    }
};

class Fare{
    public:
    Fare()
    {
        cout<<" This is fare for public transport"<<endl;
    }
};

class Car : public Vehicle
{
    
};

class Bus : public Vehicle,public Fare{

};

int main(){

    Bus obj2;
    return 0;
}