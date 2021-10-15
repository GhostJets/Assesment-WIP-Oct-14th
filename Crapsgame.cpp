#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{	
  int firstRoll, secondRoll, dice1, dice2 , game=0;
  while (game==0){
  string userimput ;
      srand((unsigned)time(NULL)); 
	  cout << "🎲🎲 Welcome to Craps game 🎲🎲 \n \n       press P to play \n \n \n " ;
    cin>>userimput;
    if ((userimput=="p") || (userimput=="P")) {
		dice1 = (rand() % 6 + 1);
		dice2 = (rand() % 6 + 1);
		firstRoll = dice1 + dice2;
		//Starts the game then Rolls 2 dice and adds the result together. 
		cout << "\nFirst roll " << dice1 << " and Second roll " << dice2 << " for a sum of " << firstRoll << ". \n" ;
    //displays the results of the roll in a nice format 
		if (firstRoll == 7 || firstRoll == 11)
		{
			cout << "You win ! \n Play again ? 0 to play again 1 to quit\n" ;
      cin >>game ;
      //for all times the game ends the user gets a option to reset the game.
		}

		else if ((firstRoll == 2) || (firstRoll == 12)){
		cout << "You lose ! \n Play again ? 0 to play again 1 to quit\n" ;
      cin >>game ;
		}else{  //if you do not win or lose this will roll you the dice again and again until you win or lose. 
			 do {
          cout<<"Roll again Y/N ?\n";
          cin>>userimput ;
				dice1 = (rand() % 6 + 1);
				dice2 = (rand() % 6 + 1);
				secondRoll = dice1 + dice2;
       //this rolls the second dice then imputs the second dice in a good format. 
				cout << "\nFirst roll = " << dice1 << " and Second roll = " << dice2 << " for a sum of " << secondRoll << ".\n" ;

				if (secondRoll == firstRoll){
			cout << "You win ! \n Play again ? 0 to play again 1 to quit\n" ;
      cin >>game ;
				} else if (((secondRoll == 7) || (secondRoll ==11))) {
					cout << "You lose \n Play again ? 0 to play again 1 to quit\n" ;
         cin >>game ;
          //checks if the second roll wins or loses the game. if neither are true it will reroll the first dice and compare to the second dice to see if there is a win or lose. this will keep repeating.
				}else{
					cout << "\nRoll again.\n" ;
          cin>>userimput ;
          dice1 = (rand() % 6 + 1);
				  dice2 = (rand() % 6 + 1);
				  firstRoll = dice1 + dice2;
          cout << "\nFirst roll = " << dice1 << " and Second roll = " << dice2 << " for a sum of " << firstRoll << ".\n" ;
          if (firstRoll == secondRoll){
			cout << "You win ! \n Play again ? 0 to play again 1 to quit\n" ;
      cin >>game ;
		}else if ((firstRoll == 7) || (firstRoll == 11)){
     	cout << "You lose \n Play again ? 0 to play again 1 to quit\n" ;
      cin >>game ;
		}
    }
	  }
      while ((((secondRoll != 7) || (secondRoll !=11)) || ((firstRoll != 7) || (firstRoll !=11))) && (secondRoll != firstRoll)) ;
      //this while will continue to roll the first and second dice until a winner or loser is decided
    }
}
else{
  cout<<"goodbye ( ﾟ▽ﾟ)/ \n \n \n return to menu \n 0 to return \n 1 to quit \n ";
  cin>>game;
  //if user doesnt type p to play this displays 
}  
}
}