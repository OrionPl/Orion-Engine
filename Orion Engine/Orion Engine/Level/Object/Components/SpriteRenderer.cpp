#include "SpriteRenderer.h"

namespace oe
{
	SpriteRenderer::SpriteRenderer(sf::Texture* texture, Object* _object, Level* _level) : Component(_object, _level)
	{
		sprite->setTexture(*texture);
		sprite->setPosition(100, 100);
	}
}