#include <cstdlib> // for EXIT_FAILURE
#include <iostream> // for std::cin, std::cout, std::cerr, std::flush.
#include <exception> // for std::exception
#include <limits> // for std::numerice_limits

#include "count_div.hpp"

int main() try {
  const auto get_user_input = [] {
    int user_input;
    do {
      std::cout << "Enter the number: " << std::flush;
      std::cin >> user_input;
      if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cerr << "Incorrect input. Please, input a number.\n";
        continue;
      }
      break;
    } while (true);
    std::cin.get(); // consume '\n'
    return user_input;
  };
  const int user_input = get_user_input();
  std::cout << "Count of positive divisors: " << count_div(user_input) << ".\n";
  std::cin.get(); // press 'enter' to exit from program
  return 0;
} catch (const std::exception &err) {
  std::cerr << err.what() << '\n';
  return EXIT_FAILURE;
} catch (...) {
  std::cerr << "Unknown exception handled. Aborting...\n";
  return EXIT_FAILURE;
}
