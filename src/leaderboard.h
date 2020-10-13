#ifndef LEADERBOARD_H
#define LEADERBOARD_H
#include <map>
#include <string>
class LeaderBoard{
    public:
    LeaderBoard(std::string);
    void Add(int &&point);
    void Print();
    void Write(){};

    private:
    std::string filename;
    std::map<std::string, int> names;
};
#endif