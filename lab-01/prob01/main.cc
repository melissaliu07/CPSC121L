#include <iomanip>
#include <iostream>

const double kTaxRate = 0.075;

int main() {
  // TODO: Create a program that computes the restaurant bill.
  double meal_cost, tip_percent;

  //Ask for user input
  std::cout << "Please input meal cost: ";
  std::cin >> meal_cost;

  std::cout << "Please input tip percentage: ";
  std::cin >> tip_percent;

  //Calculations
  const double tax = meal_cost * kTaxRate;
  const double tip = meal_cost * (tip_percent/100);
  const double total_cost = meal_cost + tax + tip;

  //Output calculations
  std::cout << std::fixed << std::setprecision(2);
  std::cout << "\nRestaurant Bill\n";
  std::cout << "====================";
  std::cout << "\nSubtotal: $" << meal_cost;
  std::cout << "\nTaxes: $" << tax;
  std::cout << "\nTip: $" << tip;
  std::cout << "====================\n";
  std::cout << "\nTotal: $" << total_cost;

  return 0;
}
