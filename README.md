# CPPND: Capstone Snake Game Example

This is a starter repo for the Capstone project in the [Udacity C++ Nanodegree Program](https://www.udacity.com/course/c-plus-plus-nanodegree--nd213). The code for this repo was inspired by [this](https://codereview.stackexchange.com/questions/212296/snake-game-in-c-with-sdl) excellent StackOverflow post and set of responses.

<img src="snake_game.gif"/>
## The Capstone Snake Game project meets the following project requirements:

## A.Introduction:

The user interacts with the game through a GameMenu which has the following options:

1."New Game" which starts a new game of snake, at the end of it the user is being shown the score and the lenght of the snake. Also he needs to introduce a name to be added to a leaderboard.

2."Leaderboard" if the user chooses this option he can look at the players with the highest point rating. The leaderboard is being displayed in the following way: 
"Rank" which represents the position of the player , "Name" which represents the name of the player and last but not least "Points" which shows the points a 
player has got.

3."Quit" this option closes the game.

## B.Rubric points:

1.Loops and Functions --> The project code is OOP with measures taken to avoid fail states.

2.I/O --> A text file is created if it does not exist in which some data is written and read from it. More can be seen in LeaderBoard.h header file.

3.The project accepts user input and processes it --> The Game Menu handles this part of the project. More can be seen in Menu.h header file.

4.The project uses Object Oriented Programming techniques --> The project revolves around classes and uses most of OOP principles.

5.Classes use appropriate access specifiers for class members --> The members are declared accordingly to their purpose, class objects communicate with members by 
setter and getter functions.

6.The project makes use of references in function declarations --> In the project code there are a number of functions that have pass-by-reference declaration, 
the is the Add(int &&point) function in LeaderBoard.h header file which uses an rvalue reference.

7.The projects uses lock_guard() to avoid the blocking of the thread --> In renderer.cpp the function UpdateWindowTitle(int score, int fps) uses a lock_guard() statement to avoid thread problems.

## Dependencies for Running Locally
* cmake >= 3.7
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* SDL2 >= 2.0
  * All installation instructions can be found [here](https://wiki.libsdl.org/Installation)
  * Note that for Linux, an `apt` or `apt-get` installation is preferred to building from source.
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory in the top level directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./SnakeGame`.
