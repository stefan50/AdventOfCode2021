#include <iostream>

using namespace std;

int main() {
    int previousOccurence = 0, currentOccurence = 0, result = 0;
    
    std::cin >> previousOccurence;
    currentOccurence = previousOccurence;
    while(currentOccurence) {
        std::cin >> currentOccurence;
        if(currentOccurence > previousOccurence) {
            result++;
        }
        previousOccurence = currentOccurence;
    }
    std::cout << "Result is " << result << std::endl;

    return 0;
}
