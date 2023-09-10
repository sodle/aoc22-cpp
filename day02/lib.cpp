//
// Created by Scott Odle on 9/10/23.
//
#include <vector>
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

typedef pair<char, char> Match;
typedef vector<Match> Matches;
const string INPUT_FILE = "./input.txt";

Matches read_input() {
    Matches result;

    ifstream input(INPUT_FILE);
    for(string line; getline(input, line);) {
        if (!line.empty()) {
            result.emplace_back(line[0], line[2]);
        }
    }

    return result;
}

int part1(const Matches& input) {
    int totalScore = 0;

    for (auto & match : input)  {
        int yours = match.first - 'A';
        int mine = match.second - 'X';

        int difference = mine - yours;
        if (difference < -1) {
            difference = 1;
        }
        if (difference > 1) {
            difference = -1;
        }

        int shapeScore = mine + 1;
        int matchScore = (difference + 1) * 3;

        totalScore += (shapeScore + matchScore);
    }

    return totalScore;
}

int part2(const Matches& input) {
    int totalScore = 0;

    for (auto & match : input) {
        int yours = match.first - 'A';
        int difference = match.second - 'Y';

        int mine = yours + difference;
        if (mine < 0) {
            mine = 2;
        }
        if (mine > 2) {
            mine = 0;
        }

        int shapeScore = mine + 1;
        int matchScore = (difference + 1) * 3;

        totalScore += (shapeScore + matchScore);
    }

    return totalScore;
}