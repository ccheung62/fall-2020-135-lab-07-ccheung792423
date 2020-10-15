#include <iostream>
#include <fstream>

#include "funcs.h"

int main (){
  std::ifstream in_file ("bad-code.cpp");
  if (in_file.fail()){
    std::cerr << "File cannot be opened for reading." << std::endl;
    exit(1);
  }
  std::string goodCode = "";
  std::string temp;
  int indent = 0;
  while (getline(in_file, temp)){
    indent -= countChar(temp,'}');
    for (int i=0; i<indent; i++){
      goodCode += "\t";
    }
    goodCode += removeLeadingSpaces(temp) + "\n";
    indent += countChar(temp,'{');
  }
  std::cout << goodCode;
  return 0;
}
