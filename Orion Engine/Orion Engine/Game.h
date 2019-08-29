#pragma once

#include <SFML/Graphics.hpp>

#include "Level/Level.h"

namespace oe
{
	class Game
	{
	public:
		Game();

		void LoadLevel(Level* level);

		Level* loadedLevel;

	private:
	};
}