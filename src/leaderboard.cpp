#include "leaderboard.h"
#include <algorithm>
#include <fstream>
#include <iostream>
#include <vector>

using std::to_string;

bool sortFunct(std::pair<std::string, int> &a, std::pair<std::string, int> &b){
    return (a.second > b.second);
}
LeaderBoard::LeaderBoard(std::string name) : filename(name){
    std::ifstream input(name);
    std::string people;
    int points;
    if(!input){
        std::ofstream(name, std::ofstream::out);
        return;
    }
    while(input >> people){
        input >> points;
        names.insert({people, points});
    }
}
void LeaderBoard::Print(){
    if(names.empty())
        std::cout <<"No record registered! \n";
    std::vector<std::pair<std::string, int>> sortVect;
    std::map<std::string, int>::iterator i;
    for(i = names.begin(); i != names.end(); ++i){
        sortVect.emplace_back(make_pair(i->first, i->second));
    }
    sort(sortVect.begin(), sortVect.end(), sortFunct);
    std::cout << "Rank" << " | " <<"Name" << " | " << "Points\n";
    for(auto j = 0; j < sortVect.size(); j++){
        std::cout << to_string(j+1) <<" | " << sortVect[j].first << " | " << sortVect[j].second << "\n"; 
    }
    std::cout << '\n';
}

void LeaderBoard::Write(){
 std::ofstream output(filename, std::ofstream::out);
    std::map<std::string, int>::iterator i;
    for(i = names.begin(); i != names.end(); ++i)
        output << i->first << " " << i->second << '\n';
}

void LeaderBoard::Add(int &&point){
    char result;
    std::string name;
    std::map<std::string, int>::iterator i;
    std::cout <<"Enter your name here:\n";
    while(std::cin >> name){
        i = names.find(name);
        if(i != names.end()){
            std::cout <<"This name already exists, overwrite it or pick another one?\n"
                      <<"Pick o for overwrite or p to pick another name \n";    
            std::cin >> result;
            if(result == 'o')
                break;
            else if(result == 'p'){
                    std::cout <<"Enter name here: ";
                    continue;
            }
            else {
                std::cout <<"Pick a valid option.";
                continue;
        }
    }
    names[name] = point;
}
