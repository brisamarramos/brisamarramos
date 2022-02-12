#include <iostream>
#include <string>

int main() {
  std::cout << "Welcome to MadLibs!\n";

  std::string name;
  std::string emotion;
  std::string animal;
  int number;
  char character;
  double percentage;
  std::string your_name;

  std::cout << "Name: ";
  std::cin >> name;
  std::cout << "Emotion: ";
  std::cin >> emotion;
  std::cout << "Animal: ";
  std::cin >> animal;
  std::cout << "Number: ";
  std::cin >> number;
  std::cout << "Letter: ";
  std::cin >> character;
  std::cout << "Floating point number between 0 and 100: ";
  std::cin >> percentage;
  std::cout << "Name: ";
  std::cin >> your_name;

  // Display the MadLib story.
  std::cout << "Dear " << name << ",\n"
            << "I am " << emotion
            << " that I was not able to complete my homework on time. My pet "
            << animal << " ate my textbook, and I was only able to retrieve "
            << number << " pages from its jaws. I hope I can get at least a "
            << character << " grade because I've done " << percentage
            << "% of the work.\nSincerely,\n"
            << your_name << "\n";
  return 0;
}


