#include <iostream>
#include <math.h>
#include <cmath>
 

double x;
double y;
double z;
double B;
double l;
double theta2;
double theta12;
double theta11;
double theta1;

int main()
{
    std::cout << "***** 2 DOF SYMETRICAL ARM, INVERSE KINEMATIC SOLVER *****\n";

    std::cout << "Input the length (cm) of joints \n";
    std::cin >> l;

    
    std::cout << "Input x coordinate: " ;
    std::cin >> x;

    std::cout << "Input y coordinate: ";
    std::cin >> y;
    
    if(x < 0 || y < 0){
      std::cout << "x and y must be positive";
    }
    else{
      z = sqrt(pow(x,2) + pow(y,2));
      B = (2*pow(l,2) - pow(z,2))/(2*pow(l,2));
      if(B < -1 || B > 1 ){
        std::cout << "x and y outside of range \n";
      }
      else{
        theta2 = acos(B);
        theta11 = atan(y/x);
        theta12 = 0.5*(180-theta2);
        theta1 = theta11 + theta12;

        if(theta1 > 180 || theta1 < 0){
          std::cout << "x and y outside of range \n";
        }
        else{
          std::cout << "angle 1 is: " << theta1 << '\n';
          std::cout << "angle 2 is: " << theta2;
        }
      
      }
    
    }
  return 0;
}


