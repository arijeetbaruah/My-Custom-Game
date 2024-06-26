#pragma once

#include <SFML/Graphics.hpp>

class BaseGameState;
class Game;

class GameStateMachine
{
private:
	std::shared_ptr<BaseGameState> currentState;
	Game* game;

public:
	GameStateMachine(Game* mGame);
	void setState(std::shared_ptr<BaseGameState> state);
	std::shared_ptr<BaseGameState> getCurrentState() const;

	void handleInput(sf::Event aEvent);
	void update(sf::Time& time);
	void render();
};
