#pragma once
#include "./animals/Czlowiek.h"

class Organizm;

class Input {

public:

	void get_input_from_keyboard();
	void handle_movement();

	void set_czlowiek(Organizm* czlowiek);
	int get_key_pressed() const;
};
