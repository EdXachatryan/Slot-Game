#include "CasinoSlot.h"
#include <iostream>


void CasinoSlot::play() {
	system("color 2");
	gameRules();

	getPlayerInformation();
	char wantToPlay;
	do {
		system("cls");

		std::cout << LoggerCasino::letsStart;
		std::cout << LoggerCasino::enterBidAmont;

		int bidMonay = player.enterMoney();

		if (bidMonay == 0) {
			std::cout << LoggerCasino::noMoney;
			break;
		}

		std::cout << LoggerCasino::guessNumberRange;

		int guessNumber = player.guessNumber();

		std::cout << LoggerCasino::lineHiglighter << LoggerCasino::newLine << LoggerCasino::enteredNumber << guessNumber << LoggerCasino::newLine;

		int slotNumber = generateNumber();

		if (checkNumbers(guessNumber, slotNumber)) {
			std::cout << bidMonay << LoggerCasino::currency << " * " << xBid << " = " << bidMonay * xBid << LoggerCasino::currency << LoggerCasino::new2Line;
			player.setAmount(player.getAmount() + bidMonay * xBid);
			std::cout << LoggerCasino::depositYourAmount << player.getAmount();
		}

		std::cout << LoggerCasino::wantToPlayAgin;
		std::cin >> wantToPlay;

	} while (wantToPlay == 'Y' || wantToPlay == 'y');

	system("cls");
	std::cout << LoggerCasino::lineHiglighter << LoggerCasino::endGame << LoggerCasino::lineHiglighter;
	std::cout << LoggerCasino::new3Line;
	std::cout << LoggerCasino::CasinoAD;

}

bool CasinoSlot::checkNumbers(const int userNumber, const int slotNumber) {

	if (userNumber == slotNumber) {
		std::cout << LoggerCasino::youWin;
		return true;
	}
	else {LoggerCasino::newLine;
		std::cout << LoggerCasino::youLose << LoggerCasino::newLine;
		std::cout << LoggerCasino::winningNumber << slotNumber << LoggerCasino::newLine;
		std::cout << LoggerCasino::depositYourAmount << player.getAmount() << LoggerCasino::currency << LoggerCasino::new2Line;
		return false;
	}
}

void CasinoSlot::gameRules() {
	system("cls");
	std::cout << LoggerCasino::CasinoAD << LoggerCasino::new3Line;
	std::cout << LoggerCasino::rule << LoggerCasino::new3Line;
}

int CasinoSlot::generateNumber() {
	return rand() % 10 + 1;
}

void CasinoSlot::getPlayerInformation() {

	std::cout << LoggerCasino::enterPlayerName;
	string name;
	std::cin >> name;
	player.setName(name);

	std::cout << LoggerCasino::enterBidAmont;
	int amountMoney;
	std::cin >> amountMoney;
	player.setAmount(amountMoney);

	std::cout << LoggerCasino::new3Line;
	std::cout << "Player name: " << name << LoggerCasino::newLine << "Amount of money: " << amountMoney << LoggerCasino::currency << LoggerCasino::new2Line;
}