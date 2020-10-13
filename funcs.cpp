#include <iostream>
#include <cctype>
#include <string>

std::string removeLeadingSpaces (std::string line){
  int i;
  for(i=0; isspace(line[i]);i++);
  return line.substr(i);
}

int countChar (std::string line, char c){
  int count = 0;
  for(int i=0; i<line.length(); i++){
    if(line[i] == c){
      count++;
    }
  }
  return count;
}
