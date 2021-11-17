#include <iostream>
#include <list>
#include <string>
#include <sstream>

int main(){
        std::list<std::string> tokenizedValues;
        std::istringstream iss("AA|BB|CC|DD");
        std::string item;
        while (std::getline(iss, item, '|'))
        {
                tokenizedValues.push_back(std::move(item));
        }
        for (auto& ite : tokenizedValues)
        {
                std::cout << ite << std::endl;
        }
        return 0;
}
