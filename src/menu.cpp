#include "menu.h"
void GameMenu::SetOptionMenu(){
    std::cout <<"Welcome to the Snake Game, pick an option from below: \n \n"
              <<"1. Start Game \n"
              <<"2. Leaderboard \n"
              <<"3. Quit \n"
              <<"\n";
 int options;
 while(std::cin >> options){
     if(options == 1 || options == 2 || options == 3)
        break;
    else 
        std::cout <<"Insert a value between 1-3. \n";
    if(std::cin.fail())
        options = 3;
}
 _gameOption = std::move(options);
}
int GameMenu::GetOptionMenu(){
    return _gameOption;
}