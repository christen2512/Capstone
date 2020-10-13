#include <iostream>
#include "controller.h"
#include "game.h"
#include "renderer.h"
#include "menu.h"
#include "leaderboard.h"

int main() {
  constexpr std::size_t kFramesPerSecond{60};
  constexpr std::size_t kMsPerFrame{1000 / kFramesPerSecond};
  constexpr std::size_t kScreenWidth{640};
  constexpr std::size_t kScreenHeight{640};
  constexpr std::size_t kGridWidth{32};
  constexpr std::size_t kGridHeight{32};

  Game game(kGridWidth, kGridHeight);
  GameMenu menu;
  LeaderBoard board("../data/record.txt"); 
  menu.SetOptionMenu();
  while(true){
    if(menu.GetOptionMenu() == 1){
      std::cout << '\n';
    }
    else if(menu.GetOptionMenu() == 2){
      board.Print();
      continue;
    }
    else if(menu.GetOptionMenu()==3) {std::cout <<"Qutting game...\n";}
    else {
      std::cout <<"Insert a valid option.";
      break;
    }
      Renderer renderer(kScreenWidth, kScreenHeight, kGridWidth, kGridHeight);
      Controller controller;
      game.Run(controller, renderer, kMsPerFrame);
      std::cout << "Game Over!\n";
      std::cout << "Score: " << game.GetScore() << "\n";
      std::cout << "Size: " << game.GetSize() << "\n";
      board.Add(game.GetScore());
      board.Write();
  }
  return 0;
}