/*
 - ricodexe@gmail.com
 - Things you can do with PI
 - PI has over three trillion digits ^_^
 - Called the Archimedes constant, an irrational number
 - Recognized as the π greek letter symbol
 - Associated heavy with mathematics, physics, geometry &more...
*/
#include <iostream>
#include <cmath>
#include <iomanip>

const double PI  = 3.141592653589793238; //Rest of the tail

int main(){
  double radius = 0;
  double circumference = 0;
  double area = 0;
  double diameter = 0;

  std::cout<<"Please enter the radius of a circle: ";
  std::cin>>radius;

  circumference = 2 * PI * radius;
  area = PI * radius * radius;
  diameter = radius * 2;

  std::cout<<std::endl;

  std::cout<< "*Area/Circumference/Diameter of a Circle*"<<std::endl
    <<"************************************"<<std::endl
    <<"       Radius = "<<radius<<std::endl
    <<"         Area = "<<area<<std::endl
    <<"Circumference = "<<circumference<<std::endl
    <<"     Diameter = "<<diameter<<std::endl;

  std::cout<<"==========================================="<<std::endl;
  //Find volume of a Sphere
  double r;
  std::cout<<"*Find volume of a Sphere*"<<std::endl;
  std::cout<<std::fixed<<std::showpoint<<std::setprecision(2);
  std::cout<<"Square root of PI: "<<sqrt(PI)<<std::endl;
  std::cout<<"Enter a value of r: ";
  std::cin>>r;
  std::cout<<std::endl;
  std::cout<<"Surface area of Sphere: 4 * PI * "<<r<<" ^ 2 = "<<4.0*PI*pow(r, 2)<<std::endl;
  std::cout<<"  Volume of the Sphere: "<<((3/4)*PI*r*r*r)<<std::endl;

  return 0;
}
