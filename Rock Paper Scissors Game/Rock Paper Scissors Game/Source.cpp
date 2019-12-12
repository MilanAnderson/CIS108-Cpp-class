// Rock Paper and Scissors game for 3 people-project
#include <iostream>
#include <string>

using namespace std;

bool valid_choice(string choice);
int get_winner(string player1, string player2);

int main()
{

string player1 = "";
string player2 = "";
int score1 = 0;
int score2 = 0;
int Best_Out_of = 0;
int result = 0;

// ask players how many rounds that they would like to play
	cout << "how many rounds would you like to play? " << endl;
	cin >> Best_Out_of; 

// ask players to chose between rock, paper or scissors
	for (int round = 0; round < Best_Out_of; round++)
	{
		player1 = "";
		player2 = "";

		cout << "player 1: chose rock, paper or scissors" << endl;
		cin >> player1;
		while (valid_choice(player1) == false)
		{
			cout << "player 1: chose rock, paper or scissors" << endl;
			cin >> player1; 
		}

		cout << "player 2: chose rock, paper or scissors" << endl;
		cin >> player2;
		while (valid_choice(player2) == false)
		{
			cout << "player 2: chose rock, paper or scissors" << endl;
			cin >> player2;
		}
		result = get_winner(player1, player2);
		if (result == 1)
		{
			score1++;
		}
		if (result == 2)
		{
			score2++;
		}
	}
	if (score1 > score2)
	{
		cout << "Player 1 wins!!!" << endl;
	}
	else if (score1 < score2)
	{
		cout << "Player 2 wins!!!" << endl;
	}
	else
	{
		cout << "The game was a tie" << endl;
	}

	return 0;
}

bool valid_choice(string choice)
{
	if (choice == "rock" || choice == "paper" || choice == "scissors")
	{
		return true;
	}
	else
	{
		cout << "Incorrect choice. Type 'rock', 'paper', 'scissors'." << endl;
		return false;
	}
}
int get_winner(string player1, string player2)
{
	if (player1 == "rock" && player2 == "paper")
	{
		return 2;
	}
	else if (player1 == "rock" && player2 == "rock")
	{
		return 0;
	}
	else if (player1 == "rock" && player2 == "scissors")
	{
		return 1;
	}
	else if (player1 == "paper" && player2 == "rock")
	{
		return 1;
	}
	else if (player1 == "paper" && player2 == "paper")
	{
		return 0;
	}
	else if (player1 == "paper" && player2 == "scissors")
	{
		return 2;
	}
	else if (player1 == "scissors" && player2 == "rock")
	{
		return 2;
	}
	else if (player1 == "scissors" && player2 == "paper")
	{
		return 1;
	}
	else if (player1 == "scissors" && player2 == "scissors")
	{
		return 0;
	}
}
