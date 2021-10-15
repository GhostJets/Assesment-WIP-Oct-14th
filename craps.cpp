#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int point,dice,game=0;
string play,roll;

int main() {
while (game == 0){  // This loop allows the game to be replayed over and over.
cout<<"Welcome To Craps\nType roll if wish to play \n"; 
cin>>play;                           
if (play == "roll"){
  srand((unsigned)time (0)); // First roll random number generator.
  int ran1 = rand() % 6 + 1;
  int ran2 = rand() % 6 + 1;
  dice=ran1+ran2;
  cout<<dice<<"\n";
  if  ((dice==7) || (dice==11)){
      cout<<"You Win!\n"; // First roll if you win on a 7 or a 11.
      cout<<"Play Again? 0 = Yes, 1 = No\n"; // Play Again message breaks while loop if you type 1.
      cin>>game;
  }
  else if ((dice==2) || (dice==12)){
    cout<<"You Lose!\n"; // First roll if you lose on a 2 or a 12.
    cout<<"Play Again? 0 = Yes, 1 = No\n";
    cin>>game;
  }
  else {
    point = dice;
     do { // Do/While loop for the second and beyond rolls.
    cout<<"The Point You Have To Hit Is "<<dice<<"\n"; 
    cout<<"Roll Again \n";
    cin>>roll; // There isn't a point to this variable it is just there so the program waits until user input.
    ran1 = rand() % 6 + 1;
    ran2 = rand() % 6 + 1;
    dice=ran1+ran2;

    if (point == dice){
      cout<<dice<<"\n";
      cout<<"You Win!\n"; // If statement to check if you win or not if you hit the point you win if not it moves on.
      cout<<"Play Again? 0 = Yes, 1 = No\n";
      cin>>game;
    }
    else{
      cout<<dice<<"\n"; // The else statement is if you don't lose or win so it displays what you rolled and
      point=dice;       // changes the point.
    }
 
     }while ((dice!=7)&&(dice!=11));   // This While loop checks for losses and breaks the Do loop above and continues the code.
     cout<<"You Lose!\n";
     cout<<"Play Again? 0 = Yes, 1 = No\n";
     cin>>game;

}
}
else { // This final else is for the first if statement asking if you want to play.
  return 0;
}
}
}