#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int getcomputerchoice(){
	srand(time(0));
	return (rand()%3)+1;
}

string determineWinner(int playerChoice, int computerChoice) {
    if (playerChoice == computerChoice) {
        return "It's a tie!";
    } else if ((playerChoice == 1 && computerChoice == 3) ||
               (playerChoice == 2 && computerChoice == 1) ||
               (playerChoice == 3 && computerChoice == 2)) {
        return "You win!";
    } else {
        return "Computer wins!";
    }
}

void display(){
	cout << "*---------------------------------* " << endl;
    cout << "*             GAME                * " << endl;
    cout << "*---------------------------------* " << endl;
    cout << "1) ROCK" << endl;
    cout << "2) PAPER" << endl;
    cout << "3) SCISSORS" << endl;
    cout << "-> Select Your Choice : ";
}

class rockpaperscissor{
	public:
		void playgame(int rounds)
		{
			int playerscore=0;
			int computerscore=0;
			
			for(int i=1;i<=rounds;i++){
				cout<<"Rounds No :"<<i<<"/"<<rounds<<endl;
				display();
				
				int playerchoice;
				cin>>playerchoice;
				
				int computerchoice = getcomputerchoice();
				
				cout << "Your choice: " <<playerchoice<< endl;
            	cout << "Computer's choice: " <<computerchoice << endl;
				
				 string result = determineWinner(playerchoice, computerchoice);
           		 cout << result << endl;

           		 if (result == "You win!") {
           		     playerscore++;
         		 }else if (result == "Computer wins!") {
            		    computerscore++;
           		 }
	
           		 cout << "Score: vasu  " << playerscore << " - " << computerscore << " Computer" << endl;
           		 cout <<"---------------------------------"<<endl;  
			}
			
		}
};
int main(){
	
	string playerName;
	int rounds;
	cout << "*---------------------------------* " << endl;
    cout << "*             NAME                * " << endl;
    cout << "*---------------------------------* " << endl;
    cout << "Enter Your Name : ";
    cin >> playerName;

    cout << "*---------------------------------* " << endl;
    cout << "*             ROUNDS              * " << endl;
    cout << "*---------------------------------* " << endl;
    cout << playerName << " How Many Rounds You Want To Play? : ";
    cin >> rounds;
    
    rockpaperscissor game;
    game.playgame(rounds);
}
