#pragma once
#include "SDL.h"
#include "Vector2.h"

class InputManager
{
public:
	static InputManager* getInstance() {
		if (instance == 0)
			instance = new InputManager();
		return instance;
	}
	~InputManager() {};
	//void update();
	//void clean();
	// M�todos de acceso
	bool isKeyDown(SDL_Event e, SDL_Scancode key);
	bool isKeyUp(SDL_Event e, SDL_Scancode key);
	bool isKeyPressed(SDL_Scancode key);
	bool isMouseButtonDown(SDL_Event e, int buttonNumber);
	bool isMouseButtonUp(SDL_Event e, int buttonNumber);
	bool isMouseButtonPressed(int buttonNumber);
	Vector2 getMousePosition(SDL_Event e);
private:
	InputManager();
	static InputManager* instance;
};

