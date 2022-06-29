
#include <iostream>
#include<string>

int main() {
	using namespace std;
	//Skills
	int power= 100;
	double mana = 5.7;
	//healths
	float health = 50.5f;
	float damage = 5.0f;

	
	//booleans
	bool isDead = false;

	char character = 'e';

	//Players Identities
	string playerName = "Hanzo";


	std::cout << "hello! "<<playerName;
	std::cout <<"\n" << playerName << "'s remains health is : " << health - damage;

}