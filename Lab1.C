//This is Giffin Scott's Lab 1 program for Operating Systems
//1/20/16

#include <stdio.h>
#include <stdlib.h>

int main (void) {

	int usrInt; //This holds the user's integer
	int intLimit = 11; //This sets up the limt of the HELLO LOOP
	void song(); //Declares song is a thing.
	float mathTheFunTimes(float); //Declares that the math function is a thing
	float usrDeci; //This will hold the user input for the math function

	printf("\nWelcome to Griffin Scott's ANNOYING PROGRAM OF ANNOYING WONDER!");
	printf("\nPlease enter an EXCITING NUMBER between 0 and 10 for an ANNOYING PRIZE!");
	//fgets(); //And this fills usrInt with the inputed number.

	scanf("%d", &usrInt);//Sets usrInt to what the user types in.

	if (usrInt < intLimit) {
		for(int i; i < usrInt; i++) { //Loops for every
			printf("\nHello Delicious Friends.");
		}//Closes for
	}//Closes if
	else{ //And here is the error catching if you try to insert a character or a float into usrInit.
		printf("\nERROR ERROR ERROR ERROR NOPE NOPE NOPE LIBRATE TUTAME EX INFERIS\n LIBRATE TUTAME EX INFERIS\n LIBRATE TUTAME EX INFERIS\n\n\n");
	}//Closes else

	song(); //And begin playing D.D Y Ponle Play's Dia.

	printf("\nAnd now for something entirely different. Please insert a number with a decimal point like 7.5. Be warned, there are crazy people about.");

	scanf("%f", &usrDeci); //This puts the next line that the user types into the math function.

	printf("THE MATH GODS HAVE SPOKEN!\n THEIR TRUTH CANNOT BE QUESTIONED!\n THE ANSWER TO THE SUPLICANT'S QUESTION IS: %f\n", mathTheFunTimes(usrDeci));
	
}//Closes Main

	void song (void) 
	{
		printf("\n\nHow about some music?\n\n");
		printf("\nEl dia comienza contigo,");
		printf("\nel dia se acaba sin ti");
		printf("\nestrella pantalla corrimos,");
		printf("\na ver el estreno de ti,");
		printf("\ny ah ests a color");
		printf("\nests contando");
		printf("\n4");
		printf("\n3");
		printf("\n2");
		printf("\n1");
	}//Closes song

	float mathTheFunTimes(float value) { //Add in a floating point number.
		return value/2.0; //And this is the way to calculate half of usrDeci.
	}//closes mathTheFunTimes
