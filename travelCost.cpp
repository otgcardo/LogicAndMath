/*
 - otgcardo@yahoo.com
 - Calculating your travel cost: 400miles, 25mpg, $3.45
*/
#include <iostream>

int main(){

  double distance = 0.0, mpg = 0.0, gasPrice = 0.0;
  double totalCost = 0.0;

  std::cout<<"Enter distance (miles): "<<std::endl;
  std::cin>>distance;

  std::cout<<"Enter mpg for (vehicle): "<<std::endl;
  std::cin>>mpg;

  std::cout<<"Enter the (per gallon): "<<std::endl; 
  std::cin>>gasPrice;

  totalCost = (distance/mpg)*gasPrice;

  std::cout<<"Trip will cost: $"<<totalCost<<std::endl;

  return 0;
}
