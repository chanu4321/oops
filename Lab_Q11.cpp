#include <bits/stdc++.h>
using namespace std;

class car{
public:
    string brand;
    string model;
    int distance;
};

int main() {
    car* c1=new car();
    cout<<"Enter Car Brand: \n";
    cin>>c1->brand;
    cout<<"Enter Car Model: \n";
    cin>>c1->model;
    cout<<"Enter Distance: \n";
    cin>>c1->distance;
    int n;
    cout<<"Enter Fuel Consumed: \n";
    cin>>n;
    cout<<"Mileage of "<< c1->brand <<" "<<c1->model<<" is "<<(c1->distance)/n<< " km/litre.";
    return 0;
}