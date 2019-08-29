#pragma once

#ifndef COMPONENT_H_
#define COMPONENT_H_

#include "../Level.h"
#include "Object.h"

class Level;
class Object;

namespace oe
{
	class Component
	{
	public:
		Component(Object* _object, Level* _level);

		void Update();
		void Tick();

	private:
		Level* level;
		Object* object;
	};
}
#endif