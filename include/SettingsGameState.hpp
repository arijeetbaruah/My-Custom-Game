#pragma once

#include "./BaseGameState.hpp"

class Game;
class Button;

class SettingsGameState : public BaseGameState
{
private:
	Game* game;

	Button* returnBtn;

public:
	SettingsGameState(Game* mGame);

	// Inherited via BaseGameState
	void enter() override;
	void handleInput(sf::Event event) override;
	void update(sf::Time elapsed) override;
	void render() override;
	void exit() override;
};