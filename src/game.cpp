#include "game.h"
#include "gameplay.h"
using namespace Game;
void Game::Execute() {
	InitWindow(screenWidth, screenHeight, "Arkanoid");
	//InitGame();
	SetTargetFPS(60);
	while (!WindowShouldClose())
	{
		UpdateDrawFrame();
	}
	CloseWindow();
	
}
