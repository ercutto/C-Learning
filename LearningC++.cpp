
#include <iostream>
#include<string>
void Calculate(float a,float b) {
	float sum = a + b;
	float divide = a / b;
	float multiplie = a * b;
	float subtraction = a - b;
	float currentSubtraction = 0;
	std::cout << "\nbasic math + result is : " << sum;
	std::cout << "\nbasic math / result is : " << divide;
	std::cout << "\nbasic math * result is : " << multiplie;
	if (subtraction < 0) {
		float currentSubtraction = subtraction * -1;
		std::cout << "\nbasic math - result is (but we change minus to plus) : " << currentSubtraction;
	}
}
int main() {
	using namespace std;
	//Skills
	int power= 100;
	
	double mana = 5.7;
	//healths
	float health = 50.5f;
	float damage = 5.0f;
	float currentHealth = health - damage;
	
	//booleans
	bool isDead = false;

	char character = 'e';

	//Players Identities
	string playerName = "Hanzo";

	//basic calculations
	float a = 6.0f;
	float b = 12.0f;
	
	std::cout << "hello! " << playerName;
	std::cout << "\n" << playerName << "'s remains health is : " << currentHealth;

	Calculate(a,b);
	

}
