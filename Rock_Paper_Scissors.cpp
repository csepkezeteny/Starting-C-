#include <iostream>
#include <ctime>

enum Choice {ROCK = 1, PAPER, SCISSORS};
std::string signs[] = {"Rock", "Paper", "Scissors"};
int computerChoose();
void checkWinner(int player, int computer);
int main() {

    int playerChoice;
    std::cout << "Choose one: (Rock=1), (Paper=2), (Scissors=3)" << std::endl;
    std::cin >> playerChoice;

    checkWinner(playerChoice, computerChoose());
    return 0;
}

int computerChoose() {
    srand(time(0));

    return rand() % 3; //0...1...2
}



void checkWinner(int player, int computer) {
    if (player == computer) {
        std::cout << "TIE!";
    }
    else if (
        (player == ROCK     && computer == SCISSORS) ||
        (player == PAPER    && computer == ROCK)     ||
        (player == SCISSORS && computer == PAPER)
    ) {
        std::cout << "Player wins! " << " Player: " << signs[player] << " Computer: " << signs[computer];
    }
    else {
        std::cout << "Computer wins!" << " Player: " << signs[player] << " Computer: " << signs[computer];
    }
}
