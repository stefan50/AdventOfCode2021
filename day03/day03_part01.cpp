#include <iostream>
#include <string>
#include <vector>
#include <cmath>

int convertToDecimal(std::string);

int main() {
    std::vector<std::string> collectionStrings;
    std::string input, gammaRate = "", epsilonRate = "";

    do {
        std::cin >> input;
        collectionStrings.push_back(input);
    } while (input != "none");
    
    
    for(int i = 0; i < collectionStrings[0].size(); ++i) {
        int wordWeight = 0;
        for(std::string currString : collectionStrings) {
            if(currString[i] == '1') wordWeight++;
            else wordWeight--;
        }
        if(wordWeight > 0) {
            gammaRate += "1";
            epsilonRate += "0";
        } else {
            gammaRate += "0";
            epsilonRate += "1";
        }
    }
    
    std::cout << convertToDecimal(gammaRate) * convertToDecimal(epsilonRate) << std::endl;
        
    return 0;
}

int convertToDecimal(std::string binary) {
    int result = 0;
    
    for(int i = 0, size = binary.size(); i < size; ++i) {
        if(binary[size - 1 - i] == '1')
            result += pow(2, i);
    }
    
    return result;
}
