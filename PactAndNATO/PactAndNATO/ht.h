#pragma once
#include "stdafx.h"

typedef enum GameState
{
	STATE_NULL = 0,
	STATE_MENU,
	STATE_GAME,
	STATE_EXIT
}GameState;

typedef enum UnitState
{
	UNIT_SELECTED = 0,
	UNIT_UNSELECTED
}UnitState;

typedef struct customPoint {
	int x;
	int y;
}customPoint;

typedef struct tilePoint {
	int x;
	int y;
	int cost;
}tilePoint;

typedef struct canTarget {
	bool infantry;
	bool vehicle;
	bool air;
}canTarget;

typedef struct moveCost
{
	int infantry;
	int vehicle;
	int air;
}moveCost;

typedef struct unitConsts
{
	string name;
	int unitType;
	int moveRange;
	int optics;
	int maxHP;
	int maxMunitions;
	int maxFuel;
	int assets[2];
	string spritesheet;
	SDL_Rect portion;
	int spriteWidth;
	int spriteHeight;
	int paramX;
	int paramY;
}unitConsts;

/*
typedef struct assetConsts
{
string name;
int damageModifier;

}assetConsts;
*/

typedef struct terrainConsts
{
	string name;
	int infantry;
	int vehicle;
	int air;
}terrainConsts;