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
    //for (int i=0; i<countChar(temp, '{'), i++){
    //  goodCode += "\t";
    //}
    //goodCode += removeLeadingSpaces(temp) + "\n";
    //for(int i=0; i<temp.length(); i++){
    //  goodCode += removeLeadingSpaces(temp[i])+"\n";
    //}
  }
  std::cout << goodCode;
}
