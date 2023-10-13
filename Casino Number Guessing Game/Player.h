#ifndef PLAYER_H
#define PLAYER_H

// TODO Person class
#include "LoggerCasino.h"
#include <iostream>

class Player {

public:
	void setName(string nm) { name = nm; };
	string getName() { return name; }
	int getAmount() { return amount; }
	
	void setAmount(int am) { amount = am; }
	
	int enterMoney() {

		if (amount <= 0)
			return 0;
		
		int number;

		do {
			std::cin >> number;
			if (number > amount)
				std::cout << LoggerCasino::reEnterBidAmont;

		} while (number > amount);

		amount -= number;
		return number;
	}
	
	int guessNumber() {
		int number;
		std::cin >> number;
		return number;
	}

private:
	string name;
	int amount;

};

#endif // !PLAYER_H
