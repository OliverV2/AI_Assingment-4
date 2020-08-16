#pragma once
#ifndef _BACKGROUND_H_
#define _BACKGROUND_H_

#include <SDL.h>
#include "Button.h"

class Background : public Button
{
private:
	

public:
	Background(SDL_Rect src, SDL_FRect dst, SDL_Renderer* r, SDL_Texture* t);
	

};

#endif