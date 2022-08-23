#include <iostream>
#include <string>
using namespace std;

int main ()
{
  string car_name, vendor, onwer_ID;
  int car_model, car_HP;long int car_price;
  cout << "Enter Car Name:";
  cin >> car_name;
  cout << "Car Name: "<< car_name <<endl;
  
  cout << "Enter Car Model:";
  cin >> car_model;
  cout << "Car Model: "<< car_model<<endl;

  cout << "Enter Car Vendor:";
  cin >> vendor;
  cout << "Car Vendor: "<< vendor<<endl;

  cout << "Enter Car Horse Power:";
  cin >> car_HP;
  cout << "Car Horse Power: "<< car_HP<<endl;

  cout << "Enter Car Price:";
  cin >> car_price;
  cout << "Car Price In PKR: "<< car_price<<endl;

  cout << "Enter Car Onwer ID:";
  cin >> onwer_ID;
  cout << "Car Onwer-ID Number: "<< onwer_ID<<endl;
  return 0;
}