#include <iostream>
#include <string>
#include <iomanip>
int main() {

  double mealcost = 0; 
  float tipPercentage =0 ; 
  double taxes = 0;
  double tip=0;
  double totalcost = 0;
  
  

  
  
  std::cout << "Please input meal cost: \n";
  std::cin >> mealcost;
  taxes = (7.5/100) * mealcost;
  std::cout << "Please input tip percentage: \n";
  std::cin >> tipPercentage;
  tip = (tipPercentage*mealcost);
  totalcost = (tipPercentage+taxes+mealcost);
  std::cout << "Restaurant Bill \n";
  std::cout << "====================\n";
  std::cout << "Subtotal: $ " << mealcost << "\n";
  std::cout << "Taxes: $" << taxes << "\n";
  std::cout << "Tip: $" << tip << "\n";
  std::cout << "====================\n";
  std::cout << "Total: $" << totalcost<<"\n";
}  


