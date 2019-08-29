#include "Game.h"

namespace oe
{
	Game::Game()
	{
		sf::RenderWindow window(sf::VideoMode(200, 200), "yeet");

		//while (window.isOpen())
		//{
		//	/*while (window.pollEvent(event))
		//	{
		//		if (event.type == sf::Event::Closed)
		//			window.close();
		//	}*/

		//	window.clear();
		//	window.display();
		//}
	}

	void Game::LoadLevel(Level* level)
	{
		level = loadedLevel;
	}
}