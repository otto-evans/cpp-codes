
#include <iostream>

// challenge: add kelvin

int main()
{
  double temp;
  char unit;
  char convert_to;

  std::cout << "****** Temperature Conversion ******\n";
  std::cout << "Fahrenhight (F)\n";
  std::cout << "Celsius (C)\n";
  std::cout << "Kelvin (K)\n";
  std::cout << "What unit are you using: ";
  std::cin >> unit;
  std::cout << "What unit do you want to convert to: ";
  std::cin >> convert_to;


  if(unit == 'F' && convert_to == 'C' ){                     // F to C
    std::cout << "Enter the temperature in Fahrenhight: ";
    std::cin >> temp;
    
    temp = (temp - 32.0)/1.8;
    std::cout << "Temperature is: " << temp << "C\n";
  }
  else if(unit == 'C' && convert_to == 'F'){                // C to F
    std::cout << "Enter the temperature in Celsius: ";
    std::cin >> temp;

    temp = (1.8 * temp) + 32.0;
    std::cout << "Temperature is: " << temp << "F\n";
  }
  else if(unit == 'C' && convert_to == 'K'){               // C to K
    std::cout << "Enter the temperature in Celsius: ";
    std::cin >> temp;

    temp = temp + 273.15;
    std::cout << "Temperature is: " << temp << "K\n";
  }
  else if(unit == 'F' && convert_to == 'K'){               // F to K
    std::cout << "Enter the temperature in Fahrenhight: ";
    std::cin >> temp;

    temp = (1.8 * temp) + 305.15;
    std::cout << "Temperature is: " << temp << "K\n";
  }
  else if(unit == 'K' && convert_to == 'F'){             // K to F
    std::cout << "Enter the temperature in Kelvin: ";
    std::cin >> temp;

    temp = (temp - 305.15)/1.8;
    std::cout << "Temperature is: " << temp << "F\n";
  }
  else if(unit == 'K' && convert_to == 'C'){               // K to C
    std::cout << "Enter the temperature in Kelvin: ";
    std::cin >> temp;

    temp = temp - 273.15;
    std::cout << "Temperature is: " << temp << "C\n";
  }
  else{
    std::cout << "Please enter C or F or K\n";
  }

  std::cout << "************************************\n";

  return 0;
}
