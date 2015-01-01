#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
//#include <ctype.h>


int main() {

	int iDice = 0; // Number of dice we will roll
	int iRollNum = 0; // The result of a dice roll
	int iSuccesses = 0; // The number of Successes rolled
	int iTens = 0; // The number of 10s rolled
	int iFours = 0; // The number of 4s rolled
	int iAutoSucc = 0; // The number of automatic successes
	srand( (unsigned int) time(NULL) ); // Get the current time to seed random number generation

	system("clear");

	printf("\nHow many d10(s) would you like to roll? ");
	scanf("%d", &iDice);

	printf("\nHow many auto success(es) do you have? ");
	scanf("%d", &iAutoSucc);

	while ( iDice > 0) {

		// Roll the dice
		iRollNum = (rand() % 10) + 1;

		// Check the results of the roll
		if ( iRollNum >= 7 ) {

			iSuccesses++;
			// 7 and up are successes

			if ( iRollNum == 10 ) {
				// 10s are 2 successes
				iSuccesses++;
				iTens++;
			}
		}
		if ( iRollNum == 4 ) {
			// Check for 4s
			iFours++;
		}

		printf("\nRolled a %d.",iRollNum);

		iDice--;
	}

	iSuccesses += iAutoSucc;

	printf("\n\nYou got %d Success(es), with %d 10(s), %d auto(s) and %d 4(s).\n",iSuccesses,iTens,iAutoSucc,iFours);

    return 0;
}
