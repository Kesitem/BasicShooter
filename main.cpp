#include "raylib.h"

int main(int argc, char **argv)
{
	const int screenWidth = 800;
	const int screenHeight = 600;
	InitWindow(screenWidth, screenHeight, "raylib basic window");
	SetTargetFPS(60);
	while (!WindowShouldClose()) {
	  BeginDrawing();
	  ClearBackground(RAYWHITE);
	  DrawText("It works!", 20, 20, 20, BLACK);
	  EndDrawing();
	}
	CloseWindow();
	return 0;

	return 0;
}