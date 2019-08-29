#include "Level.h"

Level::Level()
{
	
}

void Level::AddObject(Object* newObject)
{
	//objects.push_back(newObject);

	//std::thread update(&Level::Update, this, newObject);
	//update.detach();

	//std::thread tick(&Level::Tick, this, newObject);
	//tick.detach();
}

void Level::Update(Object* obj)
{
	/*while (doUpdate)
	{
		obj->Update();
	}*/
}

void Level::Tick(Object* obj)
{
	/*while (doTick)
	{
		std::this_thread::sleep_for(std::chrono::milliseconds(1));
		obj->Tick();
	}*/
}
