#include "Component.h"

namespace oe
{
	Component::Component(Object* _object, Level* _level)
	{
		object = _object;
		level = _level;
	}
}