#include "Player.h"

Player::Player()
{
	health = 120.0f;
	mana = 90.0f;
	power = 115.0f;
}

Player::~Player() {

}

float Player::GetMana()
{
	return this->mana;
}
void Player::setMana(float _mana) {
	this->mana = _mana;
}