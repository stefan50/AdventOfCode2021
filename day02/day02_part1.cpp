#include <iostream>
#include <string>
#include <utility>

int main() {
    std::pair<int, int> coordinates = std::make_pair(0, 0); 
    std::string inputCommand = "", power = ""; 
    do {
        std::cin >> inputCommand;
        
        if(inputCommand == "forward") {
            std::cin >> power;
            coordinates.first += stoi(power);
        } else if(inputCommand == "down") {
            std::cin >> power;
            coordinates.second += stoi(power);
        } else if(inputCommand == "up") {
            std::cin >> power;
            coordinates.second -= stoi(power);
        }
    } while (inputCommand != "0");
    
    std::cout << coordinates.first * coordinates.second << std::endl;

    return 0;
}
