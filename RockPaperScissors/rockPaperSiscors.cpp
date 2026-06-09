#include<iostream>
#include<chrono>
#include<cmath>
#include<vector>
#include<random>
#include <algorithm>
#include <cctype>

using namespace std;

int main(){

    std::cout << "=========================================\n";
    std::cout << "Welcome to Rock, Paper, Scissors!\n";
    std::cout << "First to 3 wins the match.\n";
    std::cout << "=========================================\n\n";
    std::vector<std::string> options = {"rock", "paper", "scissors"};



int playerScore = 0;
int computerScore = 0;
int ties = 0;
 char playAgain;
do{
    // 1. Seed with a non-deterministic random device
    std::random_device rd;
    std::uniform_int_distribution<> distr(0, options.size() - 1);
    auto seed = rd() ^ (
    (std::chrono::steady_clock::now().time_since_epoch().count()) +
    (std::chrono::high_resolution_clock::now().time_since_epoch().count())
);
    std::mt19937 gen(seed);
    std::string player;
    bool isValid = false;
    std::string computer = options[distr(gen)];
    std::string computerMove = options[distr(gen)];

    while(!isValid){

    std::cout<<"\nEnter your choice(Rock, Paper, Scissors)?"<< std::endl;
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
            std::cout << "\n===It's a tie!===";
        }
        else if ((player == "rock" && computer == "scissors") ||
         (player == "paper" && computer == "rock") ||
         (player == "scissors" && computer == "paper"))
         {
        std::cout << "\n===You win!===";
            playerScore = playerScore + 1;
            computerScore = computerScore + 0;
           std::cout << "\nPlayer Score: " << playerScore;
           std::cout << "\nComputer Score: " << computerScore;
           std::cout<< "\n\n<===============================> "<< endl;
                }else {
        std::cout << "\n===Computer wins!===";
            playerScore = playerScore + 0;
            computerScore = computerScore + 1;
            std::cout << "\nPlayer Score: " << playerScore;
            std::cout << "\nComputer Score: " << computerScore;
             std::cout<< "\n\n<==============================> "<<endl;
                }

     if (playerScore == 3) {
        std::cout << "\nCongratulations! You won the match!\n";
        break;
    } else if (computerScore == 3){
        std::cout << "\nGame Over! The computer won the match.\n";
        break;

    }}

    while (playerScore < 3 && computerScore < 3);

    std::cout << "\nThanks for playing!" << std::endl;
    return 0;
}
