#pragma once
#include "./BaseGameState.h"
#include <SFML/Graphics.hpp>

class Game;
class Text;
class Button;
class Sprite;

class MainMenuGameState : public BaseGameState
{
private:
	Game* game;

private:
	Text* mainMenuText;
	Button* startBtn;
	Button* exitBtn;
	Sprite* backgroundSprite;

public:
	MainMenuGameState(Game* mGame);
	~MainMenuGameState();

	void enter() override;

	void update(sf::Time elapsed) override;
	void render() override;

	void exit() override;

};

