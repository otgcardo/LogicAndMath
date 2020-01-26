/*
ricodexe@gmail.com

program to calculate discrete count for shirts 
made, discrete count on calculating license plates 
and discrete count for finding the amount of a 4 
digit lock code.

1. A particular brand of shirt comes in 8 colors, 
has a male version and a female version, and comes 
in 5 sizes for each sex. How many different types 
of this shirt are made? 8*2*5=80

Only one function is used called shirtCount(); The
rest of the logic is inside.
------------------------------------------------------
2. A license plates count can be calculated depending
on amount of numbers and characters used in system style.
There are 26∗26∗26∗10∗10∗10=17,576,000

Only one function is used called licensePlate(); The 
rest of the logic is inside.
------------------------------------------------------
3. A code have 4 digits in a specific order, the digits 
are between 0-9. How many different permutations are 
there if one digit may only be used once? 

There are two functions used, factorial() which takes one
argument and is recursive. Second function plug() takes
two arguments and has the formula.

*/
#include <iostream>

void shirtCount(){
  //Can modify internal variables and adjust to your needs
  int colors = 8, gender = 2, sizes = 5;
  int result = 0;

  printf("- A particular shirt comes in %d colors\n", colors);
  printf("- Has %d versions male and female\n", gender);
  printf("- Comes in %d sizes for each sex\n", sizes);
  printf("How many different types of these shirts are made\?\n");

  result = colors * gender * sizes;

  printf("Total made: %d\n", result);
}
////////////////////////////////////////
void licensePlate(){
  int license_plates[6] = {26,26,26,10,10,10};

  for (auto i=0; i<=5; i++) std::cout<<license_plates[i]<<" · ";

  int total_plates = license_plates[0] * license_plates[1] * license_plates[2] * 
license_plates[3] * license_plates[4] * license_plates[5];

  printf("\n");

  printf("There are %d plates under this coded system style\n", total_plates);
}
////////////////////////////////////////
int factorial(int arg){
	if(arg == 1) return arg;
	else return arg * factorial(arg-1);
}

void plug(int n, int r){
  int result = 0;
  result = factorial(n) / factorial(n - r);
  printf("Permutation sum: %d\n", result);
}
////////////////////////////////////////

int main(){

  printf("Formula I - Discrete shirt count\n");
  shirtCount();

  printf("\nFormula II - Discrete license plate count\n");
  licensePlate();
  
  printf("\nFormula III - Discrete lock code count\n");
  plug(10,4);

  return 0;
}
