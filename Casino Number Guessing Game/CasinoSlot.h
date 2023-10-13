#ifndef CASINO_SLOT_H
#define CASINO_SLOT_H


#include "Player.h"
class CasinoSlot
{
public:
	CasinoSlot(const int xBit = 10) :
			xBid(xBit) { }

	void play();
	

private:

	int generateNumber();
	void gameRules();
	void getPlayerInformation();
	bool checkNumbers(const int userNumber, const int slotNumber);
	
	Player player;
	const int xBid;
};

#endif // ! CASINO_SLOT_H


