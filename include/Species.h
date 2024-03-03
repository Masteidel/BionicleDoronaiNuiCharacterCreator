//
// Created by maste on 1/27/2024.
//

#ifndef BIONICLEDORONAINUICHARACTERCREATOR_SPECIES_H
#define BIONICLEDORONAINUICHARACTERCREATOR_SPECIES_H

#include <string>
#include <map>
#include <vector>

using namespace std;

enum Category {A, B, C};
enum Grade {plus, neutral, minus};

class Species {
	string Name;
	Category category;
	Grade grade;
	int expertiseTokens;
	map<string, int> movementSpeeds;
};

#endif //BIONICLEDORONAINUICHARACTERCREATOR_SPECIES_H
