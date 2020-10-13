#include <iostream>
#include <fstream>

#include "funcs.h"

int main (){
  std::ifstream in_file ("bad-code.cpp");
  if (in_file.fail()){
    std::cerr << "File cannot be opened for reading." << std::endl;
    exit(1);
  }
  std::string goodCode;
  std::string temp;
  while (getline(in_file, temp)){
    goodCode += removeLeadingSpaces(temp) + "\n";
  }
  std::cout << goodCode;
}
