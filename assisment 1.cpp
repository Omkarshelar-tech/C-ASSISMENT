#include <iostream>
#include <string>
using namespace std;

class car {
  public :
  //Properties
  string brand ;
  string model ; 
  int year ;
  
  //Function to display car info
  void displayinfo(){
    cout << "brand : " << brand << endl;
    cout << "model : " << model << endl;
    cout << "year : " << year << endl;
  }

};

int main(){
  //create an object for car
  car car1;
  car1.brand = "Mercedes-Benz";
  car1.model = "Maybach gls 600";
  car1.year = 2019;
  
  //create object for another car
  car car2;
  car2.brand = "Rolls-Royce";
  car2.model = "cullinan";
  car2.year = 2020;
  
  //create object for another car
  car car3;
  car3.brand = "Lamborghini";
  car3.model = "aventador";
  car3.year = 2022;
  
  
  //Print attribute values 
  cout << "car1 information : " << endl;
  car1.displayinfo();
  cout << endl; //for better readability
  
  cout << "car2 information : " << endl;
  car2.displayinfo(); 
  cout <<  endl ; //for better readability
  
  cout << "car3 information : " << endl;
  car3.displayinfo();
  
  cout << endl;
  
  /*cout << car1.brand << " " << car1.model << " " << car1.year << "\n";
  cout << car2.brand << " " << car2.model << " " << car2.year << "\n";
  cout << car3.brand << " " << car3.model << " " << car3.year << "\n"; */
  
return 0 ;
}