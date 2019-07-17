#include <iostream>

int main() {
  
  float salary, allowances, deductions, net;

  std::cout << "Enter your salary: ";
  std::cin >> salary;

  std::cout << "Enter your percentage of allowances: ";
  std::cin >> allowances;

  std::cout << "Enter your percentage of deductions: ";
  std::cin >> deductions;

  net = (salary + (salary * allowances/100))- (salary * deductions/100);
  std::cout << "Net salary: " << net << "\n";

  return 0;
}
