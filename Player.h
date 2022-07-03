#pragma once




class Player
{

public:
	Player();
	~Player();
	
	float power;
	
	float health;

	void setMana(float _mana);

	float GetMana();
private:
	float mana;
	
};

