#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{	
  int firstRoll, secondRoll, dice1, dice2 ;
	srand((unsigned)time(NULL)); 
	  cout << "Welcome to Craps game \n" ;
		dice1 = (rand() % 6 + 1);
		dice2 = (rand() % 6 + 1);
		firstRoll = dice1 + dice2;
		//Starts the game then Rolls 2 dice and adds the result together. 
		cout << "First roll " << dice1 << " and Second roll " << dice2 << " for a sum of " << firstRoll << ". \n" ;
    //displays the results of the roll in a nice format 
		if (firstRoll == 7 || firstRoll == 11)
		{
			cout << "You win !" ;
		}

		else if ((firstRoll == 2) || (firstRoll == 12)){
		cout << "You lose" ;
		}else{  //if you do not win or lose this will roll you the dice again and again until you win or lose. 
			 do {
				dice1 = (rand() % 6 + 1);
				dice2 = (rand() % 6 + 1);
				secondRoll = dice1 + dice2;
      
				cout << "First roll = " << dice1 << " and Second roll = " << dice2 << " for a sum of " << secondRoll << "." ;

				if (secondRoll == firstRoll){
					cout << " Winner " ;
				} else if (secondRoll == 7){
					cout << " You lose " ;
				}else{
					cout << "\nRoll again.\n" ;
				}
			}
      while ((secondRoll != 7) && (secondRoll != firstRoll)) ;
    }
}  