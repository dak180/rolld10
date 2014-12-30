#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
//#include <ctype.h>


int main() {

	int iDice = 0;
	int iRollNum = 0;
	int iSuccesses = 0;
	int iTens = 0;
	int iAutoSucc = 0;
	srand(time(NULL));

   system("clear");

	printf("\nHow many d10(s) would you like to roll? ");
	scanf("%d", &iDice);

	printf("\nHow many auto success(es) do you have? ");
	scanf("%d", &iAutoSucc);

	while ( iDice > 0) {

		iRollNum = (rand() % 10) + 1;

		if ( iRollNum >= 7 ) {

			iSuccesses++;

			if ( iRollNum == 10 ) {
				iSuccesses++;
				iTens++;
			}
		}

		printf("\nRolled a %d.",iRollNum);

		iDice--;
	}

	iSuccesses += iAutoSucc;

	printf("\n\nYou got %d Success(es), with %d 10s and %d auto(s).\n",iSuccesses,iTens,iAutoSucc);

    return 0;
}
