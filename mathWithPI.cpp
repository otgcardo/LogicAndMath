#include <iostream>
#include <cmath>

/*
 - ricodexe@gmail.com
 - Things you can do with PI
 - PI has over three trillion digits ^_^
 - Called the Archimedes constant, an irrational number
 - Recognized as the π greek letter symbol
 - Associated heavy with mathematics, physics, geometry &more...
*/

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

    std::cout<< "*Area/Circumference/Diameter of a Circle*"<<std::endl
         <<"************************************"<<std::endl
         <<"       Radius = "<<radius<<std::endl
         <<"         Area = "<<area<<std::endl
         <<"Circumference = "<<circumference<<std::endl
         <<"     Diameter = "<<diameter<<std::endl;


    return 0;
}
