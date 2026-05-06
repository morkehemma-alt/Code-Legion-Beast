#include<iostream>
#include<chrono>
#include<cmath>
#include<vector>
#include<random>
#include <algorithm>
#include <cctype>

using namespace std;

int main(){
    std::vector<std::string> options = {"rock", "paper", "scissors"};

    // 1. Seed with a non-deterministic random device
    std::random_device rd;

    std::uniform_int_distribution<> distr(0, options.size() - 1);
    auto seed = rd() ^ (
    (std::chrono::steady_clock::now().time_since_epoch().count()) +
    (std::chrono::high_resolution_clock::now().time_since_epoch().count())
);
 char playAgain;
do{
    std::mt19937 gen(seed);

    std::string player;
    bool isValid = false;
    std::string computer = options[distr(gen)];


    std::uniform_int_distribution<> distr(0, options.size() - 1);
    std::string computerMove = options[distr(gen)];
    while(!isValid){
    std::cout<<"Enter your choice(Rock, Paper, Scissors)?"<< std::endl;
    std::cin >> player;
    std::cout<<"Computer's choice : " << computer << std::endl;

    std::transform(player.begin(), player.end(), player.begin(),::tolower);

        // 2. Check if the input is valid
        if (player == "rock" || player == "paper" || player == "scissors") {
            isValid = true;
        } else {
            std::cout << "Invalid choice! Please try again.\n";
        }
    }
    if (player == computer) {
            std::cout << "It's a tie!";
        }
        else if ((player == "rock" && computer == "scissors") ||
         (player == "paper" && computer == "rock") ||
         (player == "scissors" && computer == "paper"))
         {
        std::cout << "You win!";

                }else {
        std::cout << "Computer wins!";
                }

        std::cout << "\nDo you want to play again? (y/n): ";
        std::cin >> playAgain;


    }while (playAgain == 'y' || playAgain == 'Y');

    std::cout << "Thanks for playing!" << std::endl;




    return 0;
}
