#include <iostream>
#include <string>
#include <utility>

int main() {
    std::pair<std::pair<int, int>, int> coordinatesExtended = std::make_pair(std::make_pair(0, 0), 0); 
    std::string inputCommand = "", power = ""; 
    do {
        std::cin >> inputCommand;
        
        if(inputCommand == "forward") {
            std::cin >> power;
            coordinatesExtended.first.first += stoi(power);
            coordinatesExtended.first.second += (coordinatesExtended.second * stoi(power));
        } else if(inputCommand == "down") {
            std::cin >> power;
            coordinatesExtended.second += stoi(power);
        } else if(inputCommand == "up") {
            std::cin >> power;
            coordinatesExtended.second -= stoi(power);
        }
    } while (inputCommand != "0");
    
    std::cout << coordinatesExtended.first.first * coordinatesExtended.first.second << std::endl;

    return 0;
}
