#pragma once
#include "GameObject.h"

class Player : public GameObject
{
	int spriteCol, spriteRow, nCols, nRows;
	int xDirection, yDirection;
	float speed, maxSpeed, accel, friction;
	int startMove;

public:
	Player();
	virtual ~Player();
	static GameObject * create();
	virtual void load(LoaderParams* params);
	virtual void draw();
	virtual void update();
	virtual void clean();
	virtual void handleEvents(SDL_Event e);
	void setTexture(std::string textureID, std::string texturePath, int nCols, int nRows);
	void setTexture(std::string textureID, int nCols, int nRows);
	std::string getTextureId();
	std::string getTexturePath();

private:
	std::string textureID;
	std::string texturePath;
};

