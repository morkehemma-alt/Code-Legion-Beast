#include<iostream>
#include<random>
#include<chrono>

using namespace std;
int main(){

    std::random_device rd;
    // Combine hardware entropy with system time for a unique seed every run
    auto seed = rd() ^ std::chrono::steady_clock::now().time_since_epoch().count();
    std::mt19937 gen(seed);

    // 2. Define the range (e.g., 1 to 10) and generate the target number
    std::uniform_int_distribution<> distr(1, 10);
    int targetNumber = distr(gen);
    int numguess;
    std::cout << "I'm thinking of a number between 1 and 10. Can you guess it?" << std::endl;
do {
        std::cout << "Enter your guess: ";
        if (!(std::cin >> numguess)) { // Simple check for non-numeric input
            std::cout << "Please enter a valid number.\n";
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            continue;
        }

        if (numguess != targetNumber) {
            std::cout << "Wrong! Try again." << std::endl;
        }

    } while (numguess != targetNumber);

    std::cout << "Bingo! The number was " << targetNumber << "." << std::endl;

    return 0;
}
