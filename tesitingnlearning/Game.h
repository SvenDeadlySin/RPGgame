#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>

#include "Functions.h"

class Game
{
public:
	Game();
	virtual ~Game();


	//Operators


	//functions
	void mainMenu();	


	//Accessors
	inline bool getPlaying() const { return this->playing;  }


	//Modifiers


private:
	int choice;
	bool playing;

};

