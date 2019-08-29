#pragma once

#include "../Component.h"
#include <SFML/Graphics.hpp>

namespace oe
{
	class SpriteRenderer : public Component
	{
	public:
		SpriteRenderer(sf::Texture* texture, Object* _object, Level* _level);
	private:
		sf::Sprite* sprite;
	};
}