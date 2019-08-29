#pragma once

#ifndef OBJECT_H_
#define OBJECT_H_

#include "../../pch.h"

#include "../Level.h"
#include "Component.h"

class Level;
class Component;

class Object
{
public:
	Object(Level* _level);

	void Update();
	void Tick();

	void AddComponent(Component* component);

	template<typename T>
	T* RemoveComponent()
	{
		for (int i = 0; i < components.size(); i++)
		{
			if (dynamic_cast<T*>(components[i]))
			{
				delete components[i];
			}
		}
	}

	template<typename T>
	T* GetComponent()
	{
		for (int i = 0; i < components.size(); i++)
		{
			if (dynamic_cast<T*>(components[i]))
			{
				return dynamic_cast<T*>(components[i]);
			}
		}

		return nullptr;
	}

private:
	Level* level;

	std::vector<Component*> components;
};
#endif