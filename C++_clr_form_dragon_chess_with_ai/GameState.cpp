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


color GameState::currentColor = white;
Piece* GameState::airTable[8][12] = {
	{NULL,NULL,new Griffin(black),NULL,NULL,NULL,NULL,NULL,NULL,NULL,new Griffin(black),NULL},
	{new Slyph(black),NULL,new Slyph(black),NULL,new Slyph(black),NULL,new Slyph(black),NULL,new Slyph(black),NULL,new Slyph(black),NULL},
	{NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL},
	{NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL},
	{NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL},
	{NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL},
	{new Slyph(white),NULL,new Slyph(white),NULL,new Slyph(white),NULL,new Slyph(white),NULL,new Slyph(white),NULL,new Slyph(white),NULL},
	{NULL,NULL,new Griffin(white),NULL,NULL,NULL,NULL,NULL,NULL,NULL,new Griffin(white),NULL},
};
Piece* GameState::earthTable[8][12] = {
	{NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL},
	{NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL},
	{NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL},
	{NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL},
	{NULL,NULL,NULL, NULL, NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL},
	{new Unicorn(white),new Unicorn(white),new Unicorn(white),new Unicorn(black),new Unicorn(black),new Unicorn(black),new Unicorn(black),new Unicorn(black),new Unicorn(black),new Unicorn(black),new Unicorn(black),NULL},
	{NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL},
	{NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL},
};
Piece* GameState::undergroundTable[8][12] = {
	{NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL},
	{NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL},
	{NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL},
	{NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL},
	{NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL},
	{NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL},
	{NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL},
	{NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL},
};

void GameState::ChangePlayerColor()
{
	if (currentColor == color::black) currentColor = color::white;
	else currentColor = color::black;
}
