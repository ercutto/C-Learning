
#include <iostream>
#include<string>
using namespace std;
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
float ValueReturnFunc(float power, float plusPower) {
	float currentPower = power + plusPower;
	return currentPower;
	
}
void states(int i) {
	switch (i) {
	case 1:
		std::cout << "\n Selected state is : " << i;
		break;
	case 2:
		std::cout << "\n Selected state is : " << i;
		break;
	default:
		std::cout << "\n Selected state is : None";
		break;
	}
   
}
void count(int count) {
	std::cout << "\nForeach loop count number " << count << endl;
}
	
void whileCount(int wCount) {
		std::cout << "\n--While loop count number " << wCount << endl;
	}
int main() {
	
	//Skills
	float power= 100.0f;
	float plusPower=15.0f;
	
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
	//while
	int varForWhileLoop = 0;
	
	// Array's
	int myArray[10] = { 5,15,40,50,35,30,70,27,14,12 };
	int randomNumbers[5]={};
	string names[4] = { "Hanzo","Kenzo","Ginsoki","Jango" };

	//Pointer And fererences
	int c = 5;
	int d = 7;
	int* pointer_c = &c;
	int& refTo_c = d;
	std::cout << "hello! " << playerName;
	std::cout << "\n" << playerName << "'s remains health is : " << currentHealth;

	Calculate(a,b);
	float additionalPower= ValueReturnFunc(power,plusPower);
	std::cout << "\n" << playerName << "'s current power is: " << additionalPower;
	states(1);
	for (int x = 0; x < 5; x++)
	{
		count(x);
	}
	while (varForWhileLoop<10)
	{
		whileCount(varForWhileLoop);
		varForWhileLoop++;
	}

	for (int i = 0; i < size(myArray); i++)
	{
		cout << "Array " << i << " values is :" << myArray[i]<<endl;
	}
	for (int i = 0; i < size(names); i++)
	{
		if (names[i]!="Hanzo")
		{
			cout << names[i] << " is not igual Hanzo" << endl;
		}
	}

	for (int i = 0; i < size(randomNumbers); i++)
	{
		randomNumbers[i] = rand();

	}
	for (int i = 0; i <size(randomNumbers); i++)
	{
		cout<<"created "<<i<<" element is: " << randomNumbers[i]<<endl;
	}

	cout << "c value is : " <<c<<" The adrress of c :" << pointer_c << endl;

}
