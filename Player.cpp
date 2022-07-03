#include "Player.h"
#include<string>
#include <iostream>
using namespace std;
Player::Player()
{
	health = 120.0f;
	mana = 90.0f;
	power = 115.0f;
}
//2nd way to make constructor
Player::Player(float _power, float _health, float _mana) {
	this->power = _power;
	this->health = _health;
	this->mana = _mana;
}
Player::~Player() {

}

float Player::GetMana()
{
	return this->mana;
}
void Player::Idle()
{
	//Player is Standing!
	cout << "Player is Standing!" << endl;
}
void Player::Walk()
{
	//Player is walking!
	cout << "Player is walking!" << endl;
}
void Player::Run()
{
	//Player is running!
	cout << "Player is running!" << endl;
}
void Player::Crouch()
{
	//Player is crouching!
	cout << "Player is crouching!" << endl;
}
void Player::Jump()
{
	//Player is Jumping
	cout << "Player is Jumping" << endl;
}
void Player::Attack()
{
	//Player is Attacking!
	cout << "Player is Attacking!" << endl;
}
void Player::setMana(float _mana) {
	this->mana = _mana;
}