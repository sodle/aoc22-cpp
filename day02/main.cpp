//
// Created by Scott Odle on 9/10/23.
//

#include <iostream>

#include "./lib.cpp"

using namespace std;

int main() {
    auto input = read_input();

    cout << "Part 1: " << part1(input) << endl;
    cout << "Part 2: " << part2(input) << endl;

    return 0;
}