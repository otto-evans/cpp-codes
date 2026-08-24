#include <iostream>
#include <utility>

int a;
int b;
int r;
int oa;
int ob;

void euclidean_algorithim(int a, int b);

int main()
{
   std::cout << "***** Euclidean Algorithim for HCF ***** \n ";

   std::cout << "please enter the two integers you wish to find the HCF of: \n";

   std::cout << "first integer: ";
   std::cin >> a;

   oa = a;

   std::cout << "second integer: ";
   std::cin >> b;

   ob = b;

   if(b > a){
    std::swap(a,b);
    euclidean_algorithim(a,b);
   }
   else{
    euclidean_algorithim(a,b);
   }



  return 0;
}

void euclidean_algorithim(int a, int b){
  do{
    r = a % b;
    a = b;
    b = r;
  }while( r != 0);
  
  if(a == 1){
    std::cout << " the HCF of " << oa << " and " << ob << " is " << a << '\n';
    std::cout << oa << " and " << ob << " are coprime! \n ";
  }
  else{
    std::cout << "the HCF of " << oa << " and " << ob << " is " << a << '\n';
  }

}