#pragma once
#include "pch.h"
#include "GameState.h"
#include "color.h"
#include "Piece.h"
#include "Slyph.h"
#include "Griffin.h"
#include "Dragon.h"
#include "Oliphant.h"
#include "Unicorn.h"
#include "Hero.h"
#include "Thief.h"
#include "Cleric.h"
#include "Mage.h"
#include "King.h"
#include "Paladin.h"
#include "Warrior.h"
#include "Basilisk.h"
#include "Dwarf.h"
#include "Elemental.h"


color GameState::currentColor = white;
bool GameState::isAITurn = false;


Piece* GameState::airTable[8][12] = {
	{NULL,NULL,new Griffin(black),NULL,NULL,NULL,new Dragon(black),NULL,NULL,NULL,new Griffin(black),NULL},
	{new Slyph(black),NULL,new Slyph(black),NULL,new Slyph(black),NULL,new Slyph(black),NULL,new Slyph(black),NULL,new Slyph(black),NULL},
	{NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL},
	{NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL},
	{NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL},
	{NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL},
	{new Slyph(white),NULL,new Slyph(white),NULL,new Slyph(white),NULL,new Slyph(white),NULL,new Slyph(white),NULL,new Slyph(white),NULL},
	{NULL,NULL,new Griffin(white),NULL,NULL,NULL,new Dragon(white),NULL,NULL,NULL,new Griffin(white),NULL},
};
Piece* GameState::earthTable[8][12] = {
	{new Oliphant(black),new Unicorn(black),new Hero(black),new Thief(black),new Cleric(black),new Mage(black),new King(black),new Paladin(black),new Thief(black),new Hero(black),new Unicorn(black),new Oliphant(black)},
	{new Warrior(black),new Warrior(black),new Warrior(black),new Warrior(black),new Warrior(black),new Warrior(black),new Warrior(black),new Warrior(black),new Warrior(black),new Warrior(black),new Warrior(black),new Warrior(black)},
	{NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL},
	{NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL},
	{NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL},
	{NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL},
	{new Warrior(white),new Warrior(white),new Warrior(white),new Warrior(white),new Warrior(white),new Warrior(white),new Warrior(white),new Warrior(white),new Warrior(white),new Warrior(white),new Warrior(white),new Warrior(white)},
	{new Oliphant(white),new Unicorn(white),new Hero(white),new Thief(white),new Cleric(white),new Mage(white),new King(white),new Paladin(white),new Thief(white),new Hero(white),new Unicorn(white),new Oliphant(white)},
};
Piece* GameState::undergroundTable[8][12] = {
	{NULL,NULL,new Basilisk(black),NULL,NULL,NULL,new Elemental(black),NULL,NULL,NULL,new Basilisk(black),NULL},
	{NULL,new Dwarf(black),NULL,new Dwarf(black),NULL,new Dwarf(black),NULL,new Dwarf(black),NULL,new Dwarf(black),NULL, new Dwarf(black)},
	{NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL},
	{NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL},
	{NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL},
	{NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL},
	{NULL,new Dwarf(white),NULL,new Dwarf(white),NULL,new Dwarf(white),NULL,new Dwarf(white),NULL,new Dwarf(white),NULL,new Dwarf(white)},
	{NULL,NULL,new Basilisk(white),NULL,NULL,NULL,new Elemental(white),NULL,NULL,NULL,new Basilisk(white),NULL},
};

void GameState::ChangePlayerColor()
{
	if (currentColor == color::black) currentColor = color::white;
	else currentColor = color::black;
}
