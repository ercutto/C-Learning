#pragma once
#include<string>



class Player
{

public:
	Player();
	~Player();
	
	float power;
	
	float health;

	void setMana(float _mana);

	float GetMana();

	//Adding Players actions
	void Idle();
	void Walk();
	void Run();
	void Crouch();
	void Jump();
	void Attack();
	
private:
	float mana;
	
};

