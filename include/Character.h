//
// Created by maste on 1/27/2024.
//

#ifndef BIONICLEDORONAINUICHARACTERCREATOR_CHARACTER_H
#define BIONICLEDORONAINUICHARACTERCREATOR_CHARACTER_H

#include <string>
#include <map>
#include <vector>

using namespace std;

class Character {
public:
	string characterName;

	string temperament;
	string aspirations;
	string ideals;
	string limits;
	string flaws;
	string relationships;

	// Species species;
	// Tribe tribe;
	string gender;

	int level;
	int hitPoints;
	int proficiencyBonus;
	int movementSpeed;

	int strength;
	int dexterity;
	int constitution;
	int intelligence;
	int wisdom;
	int charisma;

	int strMod;
	int dexMod;
	int conMod;
	int intMod;
	int wisMod;
	int chaMod;

	int reflexSave;
	int fortitudeSave;
	int willSave;

	// vector<Power> powers;

	// TODO: skills

	// Supertype supertype
	// Archetype archetype

	int widgets;
};

#endif //BIONICLEDORONAINUICHARACTERCREATOR_CHARACTER_H
