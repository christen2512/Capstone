#ifndef MENU_H
#define MENU_H
#include <iostream>
class GameMenu{
    public:
    GameMenu();
    ~GameMenu();
    void SetOptionMenu();
    int GetOptionMenu();

    private:
    int _gameOption;
};
#endif
