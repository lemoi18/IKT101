#include <iostream>
#include <string>
#include <cstring>

int main() {

    std::string string;  std::string string2;
    std::getline(std::cin , string);
    std::getline(std::cin , string2);
    std::cout << string << std::endl << string2 << std::endl;

    if (string==string2)
        std::cout <<"The strings are equal\n";
    else
        std::cout <<"The strings are not equal\n";


   if ((string.find(string2) != std::string::npos))
       std::cout << "Last string is substring of first string\n";

   else if (string2.find(string) != std::string::npos)
       std::cout << "First string is substring of last string\n";

 else
     std::cout << "There are no substrings"<< std::endl;


 return 0;

}
