/*This program computes area of a circle. 
  * Results are displayed with two digits
  * to the right of the decimal point
  */
#include <iostream>
#include <cmath>

using namespace std;

const double PI = acos(-1.0);

int main() {

//Declare and initialize objects 
double radius=10, area; 
area = PI * radius * radius; 

//Call the setf member function using the dot operator 
cout.setf(ios::fixed); //Fixed for(xx.xx)

//call the precision member function using dot operator 
cout.precision(2); //Display 2 digits to the right of the decimal 


cout << "The radius of the circle is: " << radius 
     << " centermeters\nThe area is " 
     << area << " square centimeters\n";

     return 0;

  
  
}