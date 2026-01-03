#include <iostream>
#include <ctime>
int computerPicks(int &maxNum);
void highLowOrWin(int &guess, int &computerNum);

int main() {
    int maxNum = 10;
    int computer = computerPicks(maxNum);
    int playerguess;
    do{
        std::cout << "Pick a number between 0-" <<maxNum <<": ";
        std::cin >> playerguess;
        highLowOrWin(playerguess, computer);
    }while(computer != playerguess);

    return 0;
}

int computerPicks(int &maxNum) {
    srand(time(NULL));

    int computerNum = (rand() % maxNum) + 1;

    return computerNum;
}

void highLowOrWin(int &guess, int &computerNum) {
    if(guess > computerNum) {
        std::cout << "TOO HIGH!" << std::endl;
    } else if(guess < computerNum) {
        std::cout << "TOO LOW!" << std::endl;
    } else if(guess == computerNum) {
        std::cout << "YOU WIN! The number guessed by the program was " << computerNum;
    }
}