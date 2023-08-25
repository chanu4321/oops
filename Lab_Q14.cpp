#include <iostream>
using namespace std;
class Car
{
public:
    string brand;
    string model;
    double dist;
    double litre;
    double mileage()
    {
        return (dist / litre);
    }
    Car()
    {
        cout << "Brand of the car:" << endl;
        cin >> brand;
        cout << "Model of the car:" << endl;
        cin >> model;
        cout << "Distance travelled by the car:" << endl;
        cin >> dist;
        cout << "Petrol used by the car:" << endl;
        cin >> litre;
        cout << "Brand is: " << brand << endl;
        cout << "Model is: " << model << endl;
        cout << "Distance travelled : " << dist << " kms" << endl;
        cout << "Petrol used: " << litre << " litres" << endl;
        cout << "Mileage is: " << mileage() << "km/l" << endl;
    }
};
int main()
{
    Car car1;
    return 0;
}