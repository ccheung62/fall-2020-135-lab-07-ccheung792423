#include <iostream>
#include <cctype>
#include <string>

std::string removeLeadingSpaces (std::string line){
  int i;
  for(i=0; !(isspace(line[i]));i++);
  return line.substr(i);
}
