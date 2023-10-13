#ifndef LOGGER_CASINO_H
#define LOGGER_CASINO_H

#include <string>

using std::string;

namespace {

	string endGameMsg = "Thanks For Playing Game\n";

	string lineBorder = "===============================================================================================\n";

	string caseinoAD =
		"===============================================================================================\n"
		"    CCCCC          A          SSSSSSSSS     IIIIIIII      NN     NN        OOOOOO              \n"
		" CC              A   A        SS               II         NN N   NN      OO      OO            \n"
		"CC              A     A       SSSSSSSSS        II         NN  N  NN      OO      OO            \n"
		" CC            AAAAAAAAA             SS        II         NN   N NN      OO      OO            \n"
		"    CCCCC     A         A     SSSSSSSSS     IIIIIIII      NN     NN        OOOOOO              \n"
		"===============================================================================================\n";

	string rules = lineBorder
		+ "\t\t\t Game Rules \n"
		+ lineBorder
		+ "1. Chosse Number Beetwin 1 to 10 \n"
		+ "2. Winning amount will be 10 times of bid amount \n"
		+ "3. Lose amount will be biding amount \n"
		+ "4. You can leave a game any time \n"
		+ lineBorder;
}

struct LoggerCasino
{
	static const string rule;
	static const string youWin;
	static const string endGame;
	static const string newLine;
	static const string youLose;
	static const string noMoney;
	static const string currency;
	static const string CasinoAD;
	static const string new2Line;
	static const string new3Line;
	static const string letsStart;
	static const string winningNumber;
	static const string enteredNumber;
	static const string enterBidAmont;
	static const string wantToPlayAgin;
	static const string lineHiglighter;
	static const string enterPlayerName;
	static const string reEnterBidAmont;
	static const string guessNumberAgain;
	static const string guessNumberRange;
	static const string depositYourAmount;
};

#endif // !LOGGER_CASINO_H