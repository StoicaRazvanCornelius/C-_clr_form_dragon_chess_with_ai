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

color GameState::currentColor = white;
Piece* GameState::airTable[8][12] = {
	{NULL,NULL,new Griffin(black),NULL,NULL,NULL,NULL,NULL,NULL,NULL,new Griffin(black),NULL},
	{new Slyph(black),NULL,new Slyph(black),NULL,new Slyph(black),NULL,new Slyph(black),NULL,new Slyph(black),NULL,new Slyph(black),NULL},
	{NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL},
	{NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL},
	{NULL,NULL,NULL,NULL,new Mage(white),NULL,NULL,NULL,NULL,NULL,NULL,NULL},
	{NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL},
	{new Slyph(white),NULL,new Slyph(white),NULL,new Slyph(white),NULL,new Slyph(white),NULL,new Slyph(white),NULL,new Slyph(white),NULL},
	{NULL,NULL,new Griffin(white),NULL,NULL,NULL,NULL,NULL,NULL,NULL,new Griffin(white),NULL},
};
Piece* GameState::earthTable[8][12] = {
	{NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL},
	{NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL},
	{NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL},
	{NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL},
	{NULL,NULL,new Slyph(black),new Slyph(black),new Slyph(black),NULL,NULL,NULL,NULL,NULL,NULL,NULL},
	{new Slyph(black),new Griffin(black),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL},
	{NULL,new Thief(white),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL},
	{new King(white),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL},
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