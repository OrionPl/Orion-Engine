#pragma once

#ifndef LEVEL_H_
#define LEVEL_H_

#include "..\pch.h"

#include "Object\Object.h"

class Object;

class Level
{
public:
	Level();

	void AddObject(Object* newObject);

private:
	void Update(Object* obj);
	void Tick(Object* obj);

	bool doUpdate = true;
	bool doTick = true;

	std::vector<Object*> objects;
};
#endif