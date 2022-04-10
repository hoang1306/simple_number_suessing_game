#include <iostream>
#include <cstdlib>
#include <ctime>
class game_player
{
    int user_number;
    int computer_secret;
public:
    void play();
};

void game_player::play(){
    srand(time(0));
    computer_secret = rand() % 100;
    bool isWinner;
    do{
        std::cout << "Enter your guess : ";
        std::cin >> user_number;
        if (user_number > computer_secret){
            std::cout << "Your guess is too high\n\n";
            isWinner = false;
        }else if(user_number < computer_secret){
            std::cout << "Your guess is too low\n\n";
            isWinner = false;
        }else{
            std::cout << "Congratulations you won\n";
            isWinner = true;
        }
    }while(isWinner == false);
}
int main(){
    game_player start_game;
    start_game.play();
    return 0;
}