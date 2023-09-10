//
// Created by Scott Odle on 9/10/23.
//
#include <vector>
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

typedef vector<int> Elf;
typedef vector<Elf> Elves;
const string INPUT_FILE = "./input.txt";

Elves read_input() {
    Elves result;
    Elf current;

    ifstream input(INPUT_FILE);
    for (string line; getline(input, line);) {
        if (line.empty()) {
            if (!current.empty()) {
                result.push_back(current);
                current = Elf();
            }
        } else {
            current.push_back(stoi(line));
        }
    }
    if (!current.empty()) {
        result.push_back(current);
    }

    return result;
}

int part1(const Elves& input) {
    int maxCalories = 0;
    for (auto & elf : input) {
        int calories = 0;
        for (auto & food : elf) {
            calories += food;
        }

        if (calories > maxCalories) {
            maxCalories = calories;
        }
    }
    return maxCalories;
}

int part2(const Elves& input) {
    vector<int> elfTotals;

    for (auto & elf : input) {
        int calories = 0;
        for (auto & food : elf) {
            calories += food;
        }
        elfTotals.push_back(calories);
    }

    sort(elfTotals.begin(), elfTotals.end());
    reverse(elfTotals.begin(), elfTotals.end());

    return elfTotals[0] + elfTotals[1] + elfTotals[2];
}