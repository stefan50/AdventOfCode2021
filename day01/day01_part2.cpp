#include <iostream>
#include <deque>
#include <numeric>

int main() {
    int currentOccurence = 0, result = 0;
    std::deque<int> numbersToSum;
    
    while(numbersToSum.size() != 3) {
        std::cin >> currentOccurence;
        numbersToSum.push_back(currentOccurence);
    }
    
    while(currentOccurence) {
        int previousSum = std::accumulate(numbersToSum.begin(), numbersToSum.end(), 0);
        std::cin >> currentOccurence;
        numbersToSum.pop_front();
        numbersToSum.push_back(currentOccurence);
        int currentSum = std::accumulate(numbersToSum.begin(), numbersToSum.end(), 0);
        
        if(currentSum > previousSum) {
            result++;
        }
    }
    std::cout << "Result is " << result << std::endl;

    return 0;
}
