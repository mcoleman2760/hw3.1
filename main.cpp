
/*
Author: Michael Coleman
Course: CSCI-135
Instructor: Genady Maryash
Assignment: HW E3.1

In this program an integer is read and prints if the number is negative, positive, or a zero.  */

#include <iostream>

int main() {
  int num;

  std::cout << "Enter an integer \n";
  std::cin >> num;

  if (num == 0) {
    std::cout << "Zero \n";
  }

  else if (num > 0) {
    std::cout << "Positive \n";
  }
    
  else if  (num < 0) {
    std::cout << "Negative \n";
  }
  
}
